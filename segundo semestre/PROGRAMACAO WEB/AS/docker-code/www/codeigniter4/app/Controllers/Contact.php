<?php

namespace App\Controllers;
use App\Models\ContactModel;

class Contact extends BaseController
{

    public function index(){
        echo view ('templates/header');
        echo view ('contacts/contact');
        echo view ('templates/footer'); 
    }

    public function sendContact(){
        $rules = [
            'name' => 'required|min_length[3]',
            'email' => 'required|valid_email',
            'message' => 'required|min_length[10]'
        ];
        if($this->validate($rules)){
            $data = [
                'name' => $this  -> request -> getVar('name'),
                'email' => $this  -> request -> getVar('email'),
                'message' => $this  -> request -> getVar('message')
            ];

            $ContactModel = new ContactModel();
            $ContactModel -> insert($data);
            return redirect()->to(base_url('/'));
        }else{
            $data['validation'] = $this->validator;
            echo view ('templates/header');
            echo view ('contacts/contact', $data);
            echo view ('templates/footer'); 
        }
        
    }
    
}