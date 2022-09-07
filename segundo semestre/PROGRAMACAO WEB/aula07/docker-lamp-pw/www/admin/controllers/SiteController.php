<?php

class SiteController{
        public function home(){
            if(isset($_SESSION['user'])){
                include('views/templates/header.php');
                include('views/templates/home.php');
                include('views/templates/footer.php');
            }else{
                header('Location: ?controller=user&action=validateLogin');
            }
        }

        

}

?>