<h2>Registro do cliente</h2>
<form action="?controller=client&action=registerView" method="post" class="container-fluid d-flex flex-column gap-2">
    <div class="">
        <label for="" class="form-label">Nome</label>
        <input class="form-control" type="text" name="name">
    </div>
    <div class="">
        <label for="" class="form-label">Email</label>
        <input class="form-control" type="email" name="email">
        
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
    <div class="checkbox">
        <label>
            <input type="checkbox" name="accept"> Desejo receber os comunicados do site
        </label>
    </div>
    <button type="submit" class="btn btn-primary">Enviar</button>    
</form>