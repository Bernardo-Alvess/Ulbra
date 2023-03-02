<h1>Listagem de clientes</h1>
<div class="container-fluid m-1">
    <form action="<?=base_url("admin/searchClientAction")?>" method="post">
        <input type="text" name='clientLike' placeholder="Pesquisar Cliente">
        <input type="submit" value="Search">
    </form>
</div>
<div class="table-responsive">
    <table class="table table-striped table-dark">
        <tr class="table-dark">
            <th>ID do cliente</th>
            <th>Nome</th>
            <th>Email</th>
            <th>Telefone</th>
            <th>Endereço</th>
            <th colspan="3">Ações</th>
        </tr>
    <?php
        foreach ($arrayClients as $client){
    ?>
        <tr>
            <td>
                <?=$client['idClient']?>
            </td>
            <td>
                <?=$client['name']?>
            </td>
            <td>
                <?=$client['email']?>
            </td>
            <td>
                <?=$client['phone']?>
            </td>
            <td>
                <?=$client['address']?>
            </td>
            <td>
                <a class="btn btn-info" href="<?=base_url("admin/detailsClient/{$client['idClient']}")?>">
                    Detalhes
                </a>
            </td>
            <td>
                <a class="btn btn-warning" href="<?=base_url("admin/updateClient/{$client['idClient']}")?>">
                    Alterar
                </a>
            </td>
            <td>
                <a class="btn btn-danger" href="<?=base_url("admin/deleteClient/{$client['idClient']}") ?>">
                    Deletar
                </a>
            </td>
        </tr>
    <?php
        }
    ?>
    
    </table>
</div>