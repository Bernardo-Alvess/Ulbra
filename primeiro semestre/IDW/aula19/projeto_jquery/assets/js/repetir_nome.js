$(document).ready(function(){
    $('#repetir_nome').click(function(){
        $('section').load('assets/html/repetir_nome.html', function(){
            $('form').on('submit', function(e){
                e.preventDefault();

                let nome = $('[name="nome"]').val();
                let repetir = parseInt($('[name="repetir"]').val());

                let i = 0;
                while(i < repetir){
                    alert(`${nome} | ${i+1}`);
                    i++;
                }
            })
        });
    })
});