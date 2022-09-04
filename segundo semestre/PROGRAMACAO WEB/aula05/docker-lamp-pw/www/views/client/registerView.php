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
            <th>Senha:</th>
            <td>
                <?= $arrayClient['password'];?>
            </td>
        </tr>
        <tr>
            <th>Mensagem:</th>
            <td>
                <?= $arrayClient['message']?>
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
            <th>Opção 1: </th>
            <td>
                <?=$arrayClient['options'] ?>
            </td>
            <th>Opção 2: </th>
            <td>
                <?=$arrayClient['optionsVisible'] ?>
            </td>
        </tr>
        <tr>
            <th>Termo de aceite: </th>
            <td>
                <?=$arrayClient['acceptView']?>
            </td>
        </tr>
        <tr>
            <th>Confirmação de robô: </th>
            <td>
                <?=$arrayClient['robotView']?>
            </td>
        </tr>  
        <tr>
            <th>Políticas do site: </th>
            <td>
                <?=$arrayClient['agreedView']?>
            </td>
        </tr>
    </table>
</div>
<button class="btn btn-primary" onclick="printDiv()">Imprimir cadastro</button>