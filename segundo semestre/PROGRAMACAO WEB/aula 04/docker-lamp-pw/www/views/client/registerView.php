<h1>Cadastro Feito</h1>
<div class="divToPrint">
    <table>
        <tr>
            <th>Nome:</td>
            <td>
                <?= $arrayClient['name']?>
            </td>
        </tr>
        <tr>
            <th>Email:</td>
            <td>
                <?= $arrayClient['email']?>
            </td>
        </tr>
        <tr>
            <th>Telefone:</th>
            <td>
                <?=$arrayClient['phone']?>
            </td>
        </tr>
        <tr>
            <th>Genero:</th>
            <td>
                <?=$arrayClient['gender']?>
            </td>
        </tr>
        <tr>
            <th>Termo de aceite:</th>
            <td>
                <?=$arrayClient['acceptView']?>
            </td>
        </tr>
    </table>
</div>
<button class="btn btn-primary" onclick="printDiv()">Imprimir cadastro</button>