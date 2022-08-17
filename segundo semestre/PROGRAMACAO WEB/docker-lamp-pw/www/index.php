<?php
    include('templates/header.php');

    if(isset($_GET['pages'])){
        if($_GET['pages'] == 'home'){
            include('pages/home.php');
        }
        elseif($_GET['pages'] == 'about'){
            include('pages/about.php');
        }
        elseif($_GET['pages'] == 'products'){
            include('pages/products.php');
        }      
        elseif($_GET['pages'] == 'contatos'){
            include('pages/contatos.php');
        }       
    }else{
        include('pages/home.php');
    }

    include('templates/footer.php')
?>
