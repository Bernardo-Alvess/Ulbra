<?php

class SiteController{
    public function home(){
        include('views/templates/header.php');
        include('views/pages/home.php');
        include('views/templates/footer.php');
    }

    public function about(){
        include('views/templates/header.php');
        include('views/pages/about.php');
        include('views/templates/footer.php');
    }

    public function products(){
        include('views/templates/header.php');
        include('views/pages/products.php');
        include('views/templates/footer.php');
    }

    public function contact(){
        include('views/templates/header.php');
        include('views/pages/contatos.php');
        include('views/templates/footer.php');
    }
}

?>