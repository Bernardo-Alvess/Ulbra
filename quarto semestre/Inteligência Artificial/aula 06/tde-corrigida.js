const { transcode } = require('buffer');
const { read } = require('fs');

//grupos de exemplo
const vies = 1
let x11 = 0, x12 = 0, y1 = 0;
let x21 = 0, x22 = 1, y2 = 0
let x31 = 1, x32 = 0, y3 = 1
let x41 = 1, x42 = 1, y4 = 1

//pesos
let w0 = 0, w1 = 0, w2 = 0

//variaveis
let sum, y, ajustes, ajustesTotais = 0, repeticoes = 0

do{
    //primeiro grupo
    ajustes = 0
    sum = soma(vies, x11, x12)
    y = transferencia(sum)
    if(y != y1){
        ajuste(vies, x11, x12, y1, y)
        ajustes++
        ajustesTotais++
    }

    //segundo grupo
    sum = soma(vies, x21, x22)
    y = transferencia(sum)
    if(y != y2){
        ajuste(vies, x21, x22, y2, y)
        ajustes++
        ajustesTotais++
    }

    //terceiro grupo
    sum = soma(vies, x31, x32)
    y = transferencia(sum)
    if(y != y3){
        ajuste(vies, x31, x32, y3, y)
        ajustes++
        ajustesTotais++
    }

    //quarto grupo
    sum = soma(vies, x41, x42)
    y = transferencia(sum)
    if(y != y4){
        ajuste(vies, x41, x42, y4, y)
        ajustes++
        ajustesTotais++
    }

    repeticoes++
}while(ajustes != 0)

console.log(`
        _______       __  ______   _____________________    ____  ____  ____  ___ 
       /  _/   |     /  |/  /   | / ____/ ____/_  __/   |  / __ \/ __ \/ __ \/   |
       / // /| |    / /|_/ / /| |/ /   / __/   / / / /| | / / / / / / / /_/ / /| |
     _/ // ___ |   / /  / / ___ / /___/ /___  / / / ___ |/ /_/ / /_/ / _, _/ ___ |
    /___/_/  |_|  /_/  /_/_/  |_\____/_____/ /_/ /_/   |_/_____/\____/_/ |_/_/  |_|
                                                                          
`)
console.log(`Os pesos finais ficaram w0: ${w0} | w1: ${w1} | w2: ${w2}`)
console.log(`A quantidade de ajustes foi: ${ajustesTotais}`)
console.log(`A quantidade de repetições foi: ${repeticoes}`)

const readLine = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
})

readLine.question('Qual o código do seu ídolo favorito? Valores separados por vírgula\n', input => {
    arrayValorEntrada = input.split(",")
    sum = soma(1, arrayValorEntrada[0], arrayValorEntrada[1])
    y = transferencia(sum)
    console.log(y)
    readLine.close()
})

function soma(_x0, _x1, _x2){
    return (_x0 * w0) + (_x1 * w1) + (_x2 * w2)
}

function transferencia(_sum){
    if(_sum <= 0){
        return 0
    }else {
        return 1
    }
}

function ajuste(_x0,  _x1, _x2, _yd, _yo){
    w0 = w0 + 1 * (_yd - _yo) * _x0
    w1 = w1 + 1 * (_yd - _yo) * _x1
    w2 = w2 + 1 * (_yd - _yo) * _x2
}