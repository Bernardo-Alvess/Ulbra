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

const formCalcBasica = document.forms.calculadora_basica;
formCalcBasica.addEventListener('submit', (e) =>{
    e.preventDefault();
    const {number_1, number_2, operation} = formCalcBasica;
    let number1 = parseFloat(number_1.value);
    let number2 = parseFloat(number_2.value);
    let operacao = operation.options[operation.selectedIndex].text;
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
});


const formRepetir = document.forms.repetir_nome;
formRepetir.addEventListener('submit', (e) =>{
    e.preventDefault();
    const {nome, repetir} = formRepetir;
    alert(`Repetindo ${repetir.value} vezes`);
    for(let i = 0; i < parseFloat(repetir.value); i++){
        alert(`${nome.value} | ${i+1}º repetição`);
    }
})

const formDados = document.forms.dados_pessoais;
formDados.addEventListener('submit', (e) =>{
    e.preventDefault();
    const {nome, email, endereco, mostrar_dados} = formDados;
    let arrayDados = [nome.value, email.value, endereco.value];
    mostrar_dados.value = `Nome: ${arrayDados[0]}\nE-mail: ${arrayDados[1]}\nEndereço: ${arrayDados[2]}`;
});