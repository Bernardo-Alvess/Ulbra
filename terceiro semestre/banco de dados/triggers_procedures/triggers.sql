DELIMITER //

CREATE TRIGGER estoque_produtos
AFTER INSERT OR UPDATE ON orcamentos_produtos
FOR EACH ROW
BEGIN
    IF NEW.orp_status = 2 THEN
        UPDATE produtos
        SET prq_qtd_estoque = prd.qtd_estoque + OLD.orp_qtd
        WHERE prq_codigo = NEW.prd_codigo
    ELSEIF NEW.orp_status != OLD.orp_status THEN
        UPDATE produtos
        SET prd_qtd_estoque = prd_qtd_estoque - NEW.orp_qtd
        WHERE prd_codigo = NEW.prd_codigo
    END IF
END//
DELIMITER ;