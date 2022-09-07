<?php
class ClientController{

    public function listClients(){
        if(isset($_SESSION['user'])){
            require_once('models/ClientModel.php');
            $ClientModel = new ClientModel();
            $result = $ClientModel -> listClients();

            $arrayClients = array();

            while($line = $result -> fetch_assoc()){
                array_push($arrayClients, $line);
            }

            include('views/templates/header.php');
            include('views/client/listClients.php');
            include('views/templates/footer.php');
        }else{
            header('Location: ?controller=user&action=validateLogin');
        }
    }
}
?>