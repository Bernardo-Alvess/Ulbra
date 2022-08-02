$(document).ready(function(){
    $('#soma_simples').click(function(){
        $('section').load('assets/html/soma_dois_valores.html', function(){
            $('form').on('submit', function(e){
                e.preventDefault();
                
                let number1 = parseFloat($('[name="number_1"]').val());
                let number2 = parseFloat($('[name="number_2"]').val());

                alert(number1 + number2);
            })
        });
    })
});