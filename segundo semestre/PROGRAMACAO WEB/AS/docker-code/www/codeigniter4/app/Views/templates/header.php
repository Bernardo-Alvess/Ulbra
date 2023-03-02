<!DOCTYPE html>
<html lang="pt-br">

<head>
	<meta charset="UTF-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>PW</title>
	<!-- bootstrap    -->
	<script src="https://kit.fontawesome.com/2d438585e4.js" crossorigin="anonymous"></script>
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
	<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
	<link rel="stylesheet" href="www\codeigniter4\public\assets\css\tables.css">
	<style>
		.homeBtns{
			color: white !important;
			border-radius: 10px;
			margin: 5px;
			transitions: 1000ms;
		}

		.homeBtns:hover{
			background-color: rgb(0, 140, 140);
		}
		footer a {
			text-decoration: none;
			color: white;
		}
	</style>
</head>
<body>
	<header class="container-fluid bg-black p-3 text-white text-center">
		<h1>PWebsite</h1>
		<div>
			<nav class='p-2'>
				<ul class="nav flex-row">
					<li class="nav-item">
						<a class="nav-link homeBtns" href="<?=base_url('home')?>">Home</a>
					</li>
					<li class="nav-item ">
						<a class="nav-link homeBtns" href="<?=base_url('about')?>">Sobre</a>
					</li>
					<li class="nav-item ">
						<a class="nav-link homeBtns" href="<?=base_url('products')?>">Produtos e serviços</a>
					</li>
					<li class="nav-item ">
						<a class="nav-link homeBtns" href="<?=base_url('listClients')?>">Lista de Clientes</a>
					</li>
					<li class="nav-item ">
						<a class="nav-link homeBtns" href="<?=base_url('contact')?>">Entre em Contato</a>
					</li>
				</ul>
			</nav>
	</header>
	<div class="container-fluid">
			<section class="p-5">