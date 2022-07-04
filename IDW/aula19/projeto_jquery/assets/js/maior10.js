$('document').ready(function(){
    $('#maior10').click(function(){
        $('section').load('assets/html/maior10.html', function(){
            $('form').on('submit', function(e){
                e.preventDefault();
                let number = $('#txtMaior10').val();
                if(number < 10){
                    alert("Menor que 10");
                }
                else if(number == 10){
                    alert("Igual a 10");
                }
                else{
                    alert("Maior que 10");
                }
            })
        })
    })
})