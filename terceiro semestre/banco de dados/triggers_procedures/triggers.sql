DELIMITER //
CREATE TRIGGER atualizar_estoque
AFTER INSERT ON orcamentos_produtos
FOR EACH ROW
BEGIN
  UPDATE produtos
  SET prd_qtd_estoque = prd_qtd_estoque - NEW.orp_qtd
  WHERE prd_codigo = NEW.prd_codigo;
END//
DELIMITER ;

DELIMITER //
CREATE TRIGGER cancelar_item
AFTER UPDATE ON orcamentos_produtos
FOR EACH ROW
BEGIN
  IF NEW.orp_status = 2 THEN
    UPDATE produtos
    SET prd_qtd_estoque = prd_qtd_estoque + OLD.orp_qtd
    WHERE prd_codigo = OLD.prd_codigo;
  ELSEIF NEW.orp_status <> OLD.orp_status THEN
    UPDATE produtos
    SET prd_qtd_estoque = prd_qtd_estoque - NEW.orp_qtd + OLD.orp_qtd
    WHERE prd_codigo = NEW.prd_codigo;
  END IF;
END//
DELIMITER ;

DELIMITER //
CREATE TRIGGER produtos_trigger
AFTER UPDATE ON produtos
FOR EACH ROW
BEGIN
    DECLARE qtd_anterior INT;
    DECLARE qtd_atualizada INT;
    SET qtd_anterior = OLD.prd_qtd_estoque;
    SET qtd_atualizada = NEW.prd_qtd_estoque;
    
    INSERT INTO produtos_atualizados (prd_codigo, prd_qtd_anterior, prd_qtd_atualizada, prd_valor)
    VALUES (NEW.prd_codigo, qtd_anterior, qtd_atualizada, NEW.prd_valor);
    
    IF qtd_atualizada = 0 THEN
        INSERT INTO produtos_em_falta (prd_codigo, prd_descricao, prd_status)
        SELECT prd_codigo, prd_descricao, NULL FROM produtos WHERE prd_codigo = NEW.prd_codigo;
        
        UPDATE produtos SET prd_status = NULL WHERE prd_codigo = NEW.prd_codigo;
        UPDATE orcamentos_produtos SET orp_status = NULL WHERE prd_codigo = NEW.prd_codigo;
    END IF;
END//
DELIMITER ;