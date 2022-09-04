<h2>Registro do cliente</h2>
<form action="?controller=client&action=registerView" method="post" class="container-fluid d-flex flex-column gap-2">
    <div class="row">
        <div class="col-md-6">
            <div>
                <div>
                    <label for="" class="form-label">Nome</label>
                    <input class="form-control" type="text" name="name">
                </div>
                <div>
                    <label for="" class="form-label">Email</label>
                    <input class="form-control" type="email" name="email">
                </div>
                <div>
                    <label for="" class="form-label">Senha:</label>
                    <input type="password" class="form-control" name="password">
                </div>
                <div class="form-group">
                    <label for="phone">Telefone</label>
                    <input type="number" class="form-control" name="phone">
                </div>
                <div class="form-group container-fluid d-flex gap-2">
                    <div class="radio">
                        <label><input type="radio" name="gender" value="female" checked>Feminino</label>
                    </div>
                    <div class="radio">
                        <label><input type="radio" name="gender" value="male">Masculino</label>
                    </div>
                    <div class="radio">
                        <label><input type="radio" name="gender" value="other">Outro</label>
                    </div>
                </div>
            </div>
        </div>
        <div class="col-md-6">
            <div>
                <textarea name="message" id="message" cols="30" rows="10"></textarea>
            </div>
            <div class="d-flex gap-3">
                <div>
                    <select name="options" id="">
                        <option value="op1">opção 1</option>
                        <option value="op2">opção 2</option>
                        <option value="op3">opção 3</option>
                    </select>
                </div>
                <div>
                    <select name="optionsVisible" SIZE=3>
                        <option value="op1">opção 1</option>
                        <option value="op2">opção 2</option>
                        <option value="op3">opção 3</option>
                    </select>
                </div>
            </div>
            <div class="checkbox">
                <label>
                    <input type="checkbox" name="agreed"> Li e concordo com as políticas do site
                </label>
                <label>
                    <input type="checkbox" name="robot"> Não sou robô
                </label>
                <label>
                    <input type="checkbox" name="accept"> Desejo receber os comunicados do site
                </label>
            </div>
        </div>
    </div>
    <button type="submit" class="btn btn-primary">Enviar</button>    
</form>