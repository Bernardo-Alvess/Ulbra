<h1>Listagem de Contatos</h1>
<div class="table-responsive">
    <table class="table table-striped table-dark">
        <tr>
            <th>ID do Contato</th>
            <th>Nome</th>
            <th>Email</th>
            <th>Mensagem</th>
        </tr>
    <?php
        foreach ($arrayContacts as $contacts){
    ?>
        <tr>
            <td>
                <?=$contacts['idContact']?>
            </td>
            <td>
                <?=$contacts['name']?>
            </td>
            <td>
                <?=$contacts['email']?>
            </td>
            <td>
                <?=$contacts['message']?>
            </td>
        </tr>
    <?php
        }
    ?>
    
    </table>
</div>