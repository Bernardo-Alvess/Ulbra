const formMaior10 = document.forms.maior_10;
formMaior10.addEventListener('submit', (e) =>{
    e.preventDefault();

    const {txtMaior10} = formMaior10; 
        
    let valor = parseFloat(txtMaior10.value);
    if(valor < 10){
        alert("Menor que 10");
    }
    else if(valor == 10){
        alert("Igual a 10");
    }
    else{
        alert("Maior que 10");
    }
});

const formSoma = document.forms.soma_dois_valores;
formSoma.addEventListener('submit', (e) =>{    
    const {number_1, number_2} = formSoma;
    alert(parseFloat(number_1.value) + parseFloat(number_2.value));
});

//FIXME: Não está dando output nenhum
// const formCalcBasica = document.forms.calculadora_basica;
// formCalcBasica.addEventListener('sumbmit', (e) =>{
//     e.preventDefault();


//     const {number_1, number_2, op} = formCalcBasica;

//     let number1 = parseFloat(number_1.value);
//     let number2 = parseFloat(number_2.value);
//     let operacao = op.options[op.selectedIndex].text;
//     let numeroFinal = 0;

//     switch(operacao){
//         case "+":
//             numeroFinal = number1 + number2;
//             break;
//         case "-":
//             numeroFinal = number1 - number2;
//             break;
//         case "/":
//             numeroFinal = number1 / number2;
//             break;
//         case "*":
//             numeroFinal = number1 * number2;
//     }

//     alert(numeroFinal);
// });

function calcular(){
    event.preventDefault();

    let number1 = parseFloat(document.getElementById("number_1").value);
    let number2 = parseFloat(document.getElementById("number_2").value);
    let op = document.getElementById("operation");
    let operacao = op.options[op.selectedIndex].text;
    let numeroFinal = 0;

    switch(operacao){
        case "+":
            numeroFinal = number1 + number2;
            break;
        case "-":
            numeroFinal = number1 - number2;
            break;
        case "/":
            numeroFinal = number1 / number2;
            break;
        case "*":
            numeroFinal = number1 * number2;
    }

    alert(numeroFinal);
}

const formRepetir = document.forms.repetir_nome;
formRepetir.addEventListener('submit', (e) =>{
    e.preventDefault();
    const {nome, repetir} = formRepetir;

    alert(`Repetindo ${repetir.value} vezes`);

    for(let i = 0; i < parseFloat(repetir.value); i++){
        alert(`${nome.value} | ${i+1}º repetição`);
    }
})

//TODO: printar os resultados na tela sem usar o alert()
const formDados = document.forms.dados_pessoais;
formDados.addEventListener('submit', (e) =>{
    e.preventDefault();
    const {nome, email, endereco} = formDados;

    let arrayDados = [nome.value, email.value, endereco.value];

    for(let i = 0; i < arrayDados.length; i++){
        alert(arrayDados[i]);
    }
});