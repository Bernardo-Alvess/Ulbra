<?php

class ClientController{

    var $ClientModel;

    public function __construct(){
        require_once('models/ClientModel.php');
        $this -> ClientModel = new ClientModel();
    }

    // public function registerView(){
    //     if (isset($_POST['accept'])) {
    //         $accept = true;
    //         $accept = "Termo aceito.";
    //     }else{
    //         $accept = false;
    //         $accept = "Termo não aceito.";
    //     }

    //     $arrayClient = array(
    //         'name' => $_POST['name'],
    //         'email' => $_POST['email'],
    //         'phone' => $_POST['phone'],
    //         'gender' => $_POST['gender'],
    //         'accept' => $accept,
    //     );

    //     require_once('views/templates/header.php');
    //     require_once('views/client/registerView.php');
    //     require_once('views/templates/footer.php');
    // }

    public function listClients(){

        $result = $this -> ClientModel -> listClients();
        $arrayClients = array();
        while($line = $result -> fetch_assoc()){
            array_push($arrayClients, $line);
        }
        header('Content-Type: application/json');
        echo json_encode($arrayClients);
    }

    public function consultClient($idClient){
        $result = $this -> ClientModel -> consultClient($idClient);
        if($arrayClient = $result -> fetch_assoc()){
            header('Content-Type: application/json');
            echo json_encode($arrayClient);
        }else{
            header('Content-Type: application/json');
            echo('{
                    "error" : "1",
                    "message" : "Cliente não encontrado!"
                }');
        }
    }

    public function updateClient($idClient){
        $client = json_decode(file_get_contents("php://input"));
        $arrayClient = (array) $client;
        $this -> ClientModel -> updateClient($idClient, $arrayClient);
        header('Content-Type: application/json');
        echo('
        {
            "success" : "2",
            "message" : "Cliente alterado"
        }');
    }

    public function deleteClient($idClient){
        $this -> ClientModel -> deleteClient($idClient);
        header('Content-Type: application/json');
        echo('
        {
            "success" : "3",
            "message" : "Cliente deletado"
        }');
    }

}