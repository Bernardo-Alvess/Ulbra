$(document).ready(function(){
    $('#dados').click(function(){
        $('section').load('assets/html/dados_pessoais.html', function(){
            $('form').on('submit', function(e){
                e.preventDefault()
                const formDados = document.forms.dados_pessoais;
                const {nome, email, endereco} = formDados;
                let arrayDados = [nome.value, email.value, endereco.value];

                $('#mostrar_dados').val(`Nome: ${arrayDados[0]}\nE-mail: ${arrayDados[1]}\nEndereço: ${arrayDados[2]}`)
            })
        });
    })
});