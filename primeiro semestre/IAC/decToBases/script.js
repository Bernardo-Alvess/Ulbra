function decimalToBinary(numero){
    var dividendo = numero;
    var resto = 0;
    var result = "";
    var i = 0;

    while(i==0){        
        if(dividendo < 2){
            result += parseInt(dividendo);
            i++;
        }else{
            resto = parseInt(dividendo) % 2;
            result += resto.toString();
            dividendo = parseInt(dividendo) / 2;
        }
    }
    return reverseString(result);
}

function reverseString(str){
    let arr = str.split('');
    let arrReversed = arr.reverse();
    let newStr = arrReversed.join('');
    return newStr;
}
