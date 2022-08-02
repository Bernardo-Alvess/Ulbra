function calcularKwh(){
    event.preventDefault();

    let consumoCasa = parseFloat(document.getElementById("consumo-casa").value);
    let valorKwh = parseFloat(document.getElementById("valor-kwh").value);
    let valorFinal = document.getElementById("valor-final");

    let consumo = consumoCasa * valorKwh;

    if(consumo > 100 && consumo <= 200){
        console.log(`Adicionando 25% a mais no valor do consumo. Era R$${consumo}`);
        consumo += (consumo * 25) / 100;
        console.log(`Valor atual R$${consumo}`)
    }
    else if(consumo > 200){
        console.log(`Adicionando 50% a mais no valor do consumo. Era R$${consumo}`);
        consumo += (consumo * 50) / 100;
        console.log(`Valor atual R$${consumo}`)
    }

    valorFinal.value = `Valor do consumo: R$${consumo}`;

}

