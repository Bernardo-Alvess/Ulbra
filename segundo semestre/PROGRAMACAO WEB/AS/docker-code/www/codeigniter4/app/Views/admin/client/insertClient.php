<h1>Inserindo Cliente</h1>
<?php $validation = \Config\Services::validation();?>
<form class="form" action="<?=base_url('admin/insertClientAction')?>" method="post">
    <div class="mb-3 mt-3">
        <label class="form-label">Nome</label>
        <input name="name" class="form-control" type="text">
        <?php if($validation->getError('name')) {?>
            <div class='alert alert-danger mt-2'>
              <?= $error = $validation->getError('name'); ?>
            </div>
        <?php }?>
    </div>
    <div class="mb-3 mt-3">
        <label class="form-label">Email</label>
        <input name="email" class="form-control" type="email">
        <?php if($validation->getError('email')) {?>
            <div class='alert alert-danger mt-2'>
              <?= $error = $validation->getError('email'); ?>
            </div>
        <?php }?>
    </div>
    <div class="mb-3 mt-3">
        <label class="form-label">Telefone</label>
        <input name="phone" class="form-control" type="text">
        <?php if($validation->getError('phone')) {?>
            <div class='alert alert-danger mt-2'>
              <?= $error = $validation->getError('phone'); ?>
            </div>
        <?php }?>
    </div>
    <div class="mb-3 mt-3">
        <label class="form-label">Endereço</label>
        <input name="address" class="form-control" type="text">
        <?php if($validation->getError('address')) {?>
            <div class='alert alert-danger mt-2'>
              <?= $error = $validation->getError('address'); ?>
            </div>
        <?php }?>
    </div>
    
    <input class="btn btn-primary" type="submit" value="Enviar">
</form>