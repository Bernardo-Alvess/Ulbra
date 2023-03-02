<?php

namespace App\Controllers\Admin;

use App\Models\ContactModel;

use App\Controllers\BaseController;

class Contacts extends BaseController{

    public function listContacts(){
        $ContactModel = new ContactModel();
        $data = [
            'arrayContacts' => $ContactModel -> findAll()
        ];

        echo view('admin/templates/header');
        echo view('admin/contacts/listContacts', $data);
        echo view('admin/templates/footer');
    }

}