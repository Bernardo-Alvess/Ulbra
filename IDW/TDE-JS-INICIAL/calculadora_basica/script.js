function calcular(){
    event.preventDefault();

    var number1 = parseFloat(document.getElementById("number1-id").value);
    var number2 = parseFloat(document.getElementById("number2-id").value);
    var op = document.getElementById("operation");
    var operacao = op.options[op.selectedIndex].text;
    var resultadoArea = document.getElementById("resultado");

    switch(operacao){
        case "+":
            resultadoArea.value = number1 + number2;
            break;
        case "-":
            resultadoArea.value = number1 - number2;
            break;
        case "/":
            resultadoArea.value = number1 / number2;
            break;
        case "*":
            resultadoArea.value = number1 * number2;
    }
}

