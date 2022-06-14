function convertToDecimal(numero, base){
    var arrNumero = numero.split('');
    var resultFormula = 0;
    var resultFinal = 0;
    var j = arrNumero.length - 1;

    for(let i = 0; i < arrNumero.length; i++){

        resultFormula = arrNumero[j] * Math.pow(2, i)

        resultFinal += resultFormula;
        j--;
    }

    console.log(resultFinal);
}