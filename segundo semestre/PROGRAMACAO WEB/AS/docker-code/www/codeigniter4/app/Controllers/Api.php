<?php

namespace App\Controllers;
use App\Models\ClientModel;

class Api extends BaseController{
    public function clients(){
        $ClientModel = new ClientModel();
        $data = [
            'clients' => $ClientModel -> findAll()
        ];

        header('Cotent-Type: application/json');
        echo json_encode($data);
    }
}