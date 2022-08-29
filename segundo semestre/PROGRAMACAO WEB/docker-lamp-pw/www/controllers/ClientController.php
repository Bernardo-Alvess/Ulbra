<?php

class ClientController{
    public function register(){
        require_once('views/templates/header.php');
        require_once('views/client/register.php');
        require_once('views/templates/footer.php');
    }

    public function registerView(){
        
        if(isset($_POST['accept'])){
            $accept = true;
            $acceptView = 'Termo aceito';
        }else{
            $accept = false;
            $acceptView = 'Termo não aceito';
        }

        if(isset($_POST['agreed'])){
            $agreed = true;
            $agreedView = 'Políticas aceitas';
        }else{
            $agreed = false;
            $agreedView = 'Políticas não aceitas';
        }

        if(isset($_POST['robot'])){
            $robot = true;
            $robotView = 'Não é um robô';
        }else{
            $robot = false;
            $robotView = 'BEEP BOOP';
        }

        $arrayClient = array(
            'name' => $_POST['name'],
            'email' => $_POST['email'],
            'password' => $_POST['password'],
            'message' => $_POST['message'],
            'options' => $_POST['options'],
            'optionsVisible' => $_POST['optionsVisible'],
            'phone' => $_POST['phone'],
            'gender' => $_POST['gender'],
            'accept' => $accept,
            'acceptView' => $acceptView,
            'agreed' => $agreed,
            'agreedView' => $agreedView,
            'robot' => $robot,
            'robotView' => $robotView
        );

        require_once('views/templates/header.php');
        require_once('views/client/registerView.php');
        require_once('views/templates/footer.php');
    }
}

?>
