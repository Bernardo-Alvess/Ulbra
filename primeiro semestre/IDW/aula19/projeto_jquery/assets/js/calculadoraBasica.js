$(document).ready(function(){
    $('#calculadora').click(function(){
        $('section').load('assets/html/calculadora.html', function(){
            $('#calcular').click(function(){
                event.preventDefault();
                let number1 = parseFloat($('#number1-id').val());
                let number2 = parseFloat($('#number2-id').val());
                let op = $('#operation').val();
                let valorFinal = 0;

                switch(op){
                    case "mais":
                        valorFinal = number1 + number2;
                        break;
                    case "menos":
                        valorFinal = number1 - number2;
                        break;
                    case "divisao":
                        valorFinal = number1 / number2;
                        break;
                    case "multiplicar":
                        valorFinal = number1 * number2;
                }
                $('#resultado').html(valorFinal)
                });
        });
    });
});

