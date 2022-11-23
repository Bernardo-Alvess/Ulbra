<?php

class ClientModel{

    var $connection;

    public function __construct(){
        require_once('db/ConnectClass.php');
        $ConnectClass = new ConnectClass();
        $ConnectClass -> openConnect();
        $this -> Connection = $ConnectClass -> getConn();
    }

    public function listClients(){
        $sql = "SELECT * FROM clients";
        return $this ->Connection -> query($sql);
    }

    public function detailsClient($idClient){
        $sql = "
            SELECT * FROM clients
            WHERE
            idClient = $idClient
        ";
        return $this -> Connection -> query($sql);
    }

    public function insertClient($arrayClient){
        $sql = "
           INSERT INTO 
                clients (name, email, phone, address)
            VALUES
                (
                 '{$arrayClient['name']}', 
                 '{$arrayClient['email']}',
                 '{$arrayClient['phone']}',
                 '{$arrayClient['address']}'
                )
        ";
        return $this -> Connection -> query($sql);
    }

    public function updateClient($arrayClient){
        $sql = "
            UPDATE clients 
                SET 
                    name = '{$arrayClient['name']}',
                    email = '{$arrayClient['email']}',
                    phone = '{$arrayClient['phone']}',
                    address = '{$arrayClient['address']}' 
                WHERE
                    idClient = {$arrayClient['idClient']}
        ";
        return $this -> Connection -> query($sql);
    }

    public function deleteClient($idClient){
        $sql = "
           DELETE FROM clients
            WHERE
                idClient = {$idClient}
        ";
        return $this -> Connection -> query($sql);
    }
}