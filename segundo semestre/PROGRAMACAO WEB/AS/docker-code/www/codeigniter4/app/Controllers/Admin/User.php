<?php

namespace App\Controllers\Admin;

use App\Controllers\BaseController;
use App\Models\UserModel;

class User extends BaseController{

    public function validateLogin(){
        $rules = [
            'login' => 'required',
            'password' => 'required'
        ];

        if($this->validate($rules)){
            $userName = $this -> request -> getVar('login');
            $userPassword = $this -> request -> getVar('password');

            $UserModel = new UserModel();

            if($user = $UserModel -> getUser($userName)){

                if($user['password'] == $userPassword){
                    $session = \Config\Services::session();
                    $session -> set('user', $user);
                    return redirect()->to(base_url('/admin'));
                }
            }
        }else{
            $data['validation'] = $this->validator;
            echo view ('/admin/main/login', $data);
        }
        
    }
}