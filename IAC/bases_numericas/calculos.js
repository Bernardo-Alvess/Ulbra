// Fazer em js uma calculadora (console.log) para passar qualquer base para a base decimal. 

// Lógica que definimos em aula. 

// //pegar o número
// //extrair cada algarimos pra uma posição pra dentro do array
// // usar função split('')
// // percorrer o vetor ao contrário
// // aplicar formula (a*bp) e cada resultado ir somando. 

// // para transformar um número em um array e cada algarimo atribuir a uma posição do array use o número como string. Ex. 

// var numero = "556"
// var octalNum = numero.split('');

// só fazer o locin maroto. 

function cleanArray(arr, base){

    let newArr = [];
    let isInvalid = false;
    
    for(let i = arr.length - 1; i >= 0; i--){

        switch(base){
            case 2:
                if(arr[i] <= 1){
                    newArr.push(parseFloat(arr[i]));
                }
                else{
                    isInvalid = true;
                }
                break;

            case 8:
                if(arr[i] <= 7){
                    newArr.push(parseFloat(arr[i]));
                }
                else{
                    isInvalid = true;
                }
                break;

            case 16:
                switch(arr[i]){
                    case 'A':
                        newArr.push(10);
                        break;
                    case 'B':
                        newArr.push(11);
                        break;
                    case 'C':
                        newArr.push(12);
                        break;
                    case 'D':
                        newArr.push(13);
                        break;
                    case 'E':
                        newArr.push(14);
                        break;
                    case 'F':
                        newArr.push(15);
                        break;
                    default:
                        newArr.push(parseFloat(arr[i]));
                        break;
                }
                break;

            default:
                console.log("Base indisponível");
        }
    }

    return isInvalid ? isInvalid : newArr;
}

function convertToDec(num, base){

    let numero = num.toString();
    let newArr = cleanArray(numero.toUpperCase().split(''), base);
    let numeroFinal = 0;
    
    if(newArr === true){
        console.log("Número inválido para a base selecionada");
    }
    else{
        for(let i = 0; i < newArr.length; i++){
            numeroFinal += newArr[i] * Math.pow(base, i);
        }
    }

    return numeroFinal;
}
