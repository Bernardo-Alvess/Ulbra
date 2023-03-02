<h1>Listagem de clientes</h1>

<div class="table-responsive">
    <table class="table table-striped">
    
        <tr class="table-dark">
            <th scope="col">ID do cliente</th>
            <th scope="col">Nome</th>
            <th scope="col">Email</th>
            <th scope="col">Endereço</th>
            <th scope="col">Telefone</th>
            <th scope="col" colspan="3">Ações</th>
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
                <a class="btn btn-info" href="<?=base_url("detailsClient/{$client['idClient']}")?>">
                    Detalhes
                </a>
            </td>
        </tr>
    <?php
        }
    ?>
</div>

</table>