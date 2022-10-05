<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
    <link rel="stylesheet" href="assets/css/style.css">
    <title>Document</title>
</head>
<body>
    <header class="container-fluid bg-primary text-white p-5 d-flex align-content-center justify-content-center">
        <h1>Admin</h1>
    </header>
    <main class="container-fluid">
        <div class="row">
            <nav class="container-fluid col-md-3 bg-secondary d-flex flex-row justify-content-center align-items-center">
                <ul class="list-unstyled">
                    <li>
                        <a href="?controller=site&action=home" class="text-white">Home</a>
                        <a href="?controller=client&action=listClients">Listagem de Clientes</a>
                    </li>
                </ul>
            </nav>
            <section class="col-md-9 h-100">