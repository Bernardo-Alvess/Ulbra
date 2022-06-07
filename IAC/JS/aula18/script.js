var number = 100;
var string = 'Hello, World!';
var bool = true;


function imprimir(variavel){
    console.log(`O valor da variável = ${variavel}`);
    console.log(`O tipo da variável = ${typeof(variavel)}`);
}

//If ternário

let idade = 10;

var maiorDeIdade = idade >= 18 ? "Maior de idade" : "Menor de idade";

console.log(maiorDeIdade);

//Maior número
function numeroMaior(n1, n2, n3){
    if(n1 > n2 && n1 > n3){
        console.log(n1 + " é maior");
    }
    else if(n2 > n1 && n2 > n3){
        console.log(n2 + ' é maior');
    }
    else if(n3 > n1 && n3 > n1){
        console.log(n3 + ' é maior')
    }
}

//tabuada de um número
function tabuada(number){
    for (let index = 1; index <= 10; index++) {
        console.log(`${number} x ${index} = ${number * index}`)        
    }
}

var carros = ['opala', 'audi a3', 'gol quadrado', 'carro do mrbean'];

console.log(carros);

for(let i = 0; i < carros.length; i++){
    console.log(carros[i]);
}

var nomes = 'bernardo, bryan, vitor';
nomes = nomes.replace(/\s+/g, '');
var arrNomes = nomes.split(",");

console.log(nomes);
console.log(arrNomes);