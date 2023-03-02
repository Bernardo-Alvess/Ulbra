<!DOCTYPE html>
<html>
<head>
	<title>Exemplo Login</title>
	 <!-- Bootstrap CSS -->
	 <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0-alpha.6/css/bootstrap.min.css" integrity="sha384-rwoIResjU2yc3z8GV/NPeZWAv56rSmLldC3R/AZzGRnGxQQKnKkoFVhFQhNUwEyJ" crossorigin="anonymous">
	<script src="https://code.jquery.com/jquery-3.1.1.slim.min.js" integrity="sha384-A7FZj7v+d/sdmMqp/nOQwliLvUsJfDHW+k9Omg/a/EheAdgtzNs3hpfag6Ed950n" crossorigin="anonymous"></script>
	<script src="https://cdnjs.cloudflare.com/ajax/libs/tether/1.4.0/js/tether.min.js" integrity="sha384-DztdAPBWPRXSA/3eYEEUWrWCy7G5KFbe8fFjk5JAIxUYHKkDx6Qin1DkWx51bBrb" crossorigin="anonymous"></script>
	<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0-alpha.6/js/bootstrap.min.js" integrity="sha384-vBWWzlZJ8ea9aCX4pEW3rVHjgjt7zpkNpZk+02D9phzyeVkE+jo0ieGizqPLForn" crossorigin="anonymous"></script>
</head>
<body>
<div class="container-fluid" id='wrapper'>
	<div class="row">
		<div class="col-md-4"></div>
		<div class="col-md-4 p-5">
			<h1>Login no sistema</h1>
			<?php $validation = \Config\Services::validation(); ?>
			<form action="<?=base_url('admin/validateLogin')?>" method=POST name="formulario" id="formulario">
				<div class="form-group">
					<label >Login</label>
					<input type="text" class="form-control" name="login" placeholder="Digite o usuário">
					<?php if($validation->getError('login')) {?>
						<div class='alert alert-danger mt-2'>
						<?= $error = $validation->getError('login'); ?>
						</div>
       				 <?php }?>			
				</div>
				<div class="form-group">
		 			<label >Senha</label>
					<input type="password" class="form-control" name="password" placeholder="Digite sua senha">
					<?php if($validation->getError('password')) {?>
						<div class='alert alert-danger mt-2'>
						<?= $error = $validation->getError('password'); ?>
						</div>
       				 <?php }?>		
				</div>	
				<input class="btn btn-primary" type="submit" name="Enviar" value="Fazer Login">
			</form>
		</div>	
		<div class="col-md-4"></div>	
	</div> 
</div>
</body>
</html> 