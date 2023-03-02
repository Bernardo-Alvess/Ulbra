<!-- <!DOCTYPE html>
<html lang="pt-br">

<head>
	<meta charset="UTF-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>Document</title> -->

	<!-- bootstrap    -->
	<!-- <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
	<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script> -->

	<!-- JS e CSS -->
	<!-- <script src="assets/js/script.js"></script>
	<link rel="stylesheet" href="assets/css/style.css">
</head>
<body>
	<header class="container-fluid bg-black p-5 text-white text-center">
		<h1>Minha página de PW</h1>
	</header>
	<div class="container-fluid">
		<div class="row">
			<nav class="col-md-3 p-4">
				<h3>Menu</h3>
				<ul class="nav flex-column">
					<li class="nav-item">
						<a id="btnHome" class="nav-link" href="<?=base_url('/admin')?>">Home</a>
					</li>
				</ul>
				<h3>Clientes</h3>
				<ul class="nav flex-column">
					<li class="nav-item">
						<a id="" class="nav-link" href="<?=base_url('/admin/insertClient')?>">Cadastro</a>
					</li>
					<li class="nav-item">
						<a id="" class="nav-link" href="<?=base_url('/admin/listClients')?>">Lista de Clientes</a>
					</li>
				</ul>
				<h3>Contatos</h3>
				<ul class="nav flex-column">
					<li class="nav-item">
						<a id="" class="nav-link" href="<?=base_url('/admin/listContacts')?>">Lista de Contatos</a>
					</li>
				</ul>
			</nav>
			<section class="col-md-9 p-5"> -->

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
	<!-- JS e CSS -->
	<script src="assets/js/script.js"></script>
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
	<header class="container-fluid bg-secondary p-3 text-white text-center">
		<h1>Área Administrativa</h1>
		<div>
			<nav class='p-2'>
				<ul class="nav flex-row">
					<li class="nav-item">
						<a class="nav-link homeBtns" href="<?=base_url('/admin')?>">Home</a>
					</li>
					<li class="nav-item">
						<a id="" class="nav-link homeBtns" href="<?=base_url('/admin/listContacts')?>">Lista de Contatos</a>
					</li>
					<li class="nav-item">
						<a id="" class="nav-link homeBtns" href="<?=base_url('/admin/insertClient')?>">Cadastro</a>
					</li>
					<li class="nav-item">
						<a id="" class="nav-link homeBtns" href="<?=base_url('/admin/listClients')?>">Lista de Clientes</a>
					</li>
				</ul>
			</nav>
	</header>
	<div class="container-fluid">
			<section class="p-5">