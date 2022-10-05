<h1>Listagem de produtos</h1>
<table class="table">
    <tr>
        <th>ID do produto</th>
        <th>Nome</th>
        <th>Preço</th>
        <th>Descrição</th>
    </tr>

    <?php
        foreach($arrayProducts as $product){
    ?>
        <tr>
            <td>
                <?= $product['idProduct']?>
            </td>
            <td>
                <?= $product['name']?>
            </td>
            <td>
                <?= $product['price']?>
            </td>
            <td>
                <?= $product['description']?>
            </td>
        </tr>
    <?php
        }
    ?>
</table>