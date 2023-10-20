const form = document.getElementById('form-regras')
const variavel = document.getElementById('variavel')
const operador = document.getElementById('operador')
const resultado = document.getElementById('resultado')

const operadoresNumericos = ['>', '>=', '<', '<=', '==', '!=']
const operadoresTexto = ['==', '!=']

async function getData(){
    const response = await fetch('/variaveis')
    const json = response.json()
    return await json
}

async function popularDados(){
    const obj = await getData()
    for(let key in obj){
        const optionVar = document.createElement('option')
        optionVar.textContent = obj[key].varName
        optionVar.value = obj[key].varName

        
        variavel.appendChild(optionVar)
    }
}

async function valoresVariavel(nome){
    const response = await fetch(`/vars/${nome}`)
    const json = response.json()
    console.log(json)
    return json
}

document.addEventListener('DOMContentLoaded', async function() {
    await popularDados()
})

variavel.addEventListener('change', async () => {
    const valorFiltrado = await valoresVariavel(variavel.value)
    console.log(valorFiltrado)
    resultado.innerHTML = ''
    operador.innerHTML = ''
    let tipoOperador = []
    for(let i = 0; i < valorFiltrado.values.length; i++){
        const valor = valorFiltrado.values[i]
        const valoresOpt = document.createElement('option')
        valoresOpt.textContent = valor
        valoresOpt.value = valor
        resultado.appendChild(valoresOpt)
    }

    if(valorFiltrado.type == 'numerica'){
        tipoOperador = operadoresNumericos
    }else{
        tipoOperador = operadoresTexto
    }

    for(let i = 0; i < tipoOperador.length; i++){
        const operadores = document.createElement('option')
        operadores.textContent = tipoOperador[i]
        operadores.value = tipoOperador[i]
        operador.appendChild(operadores)
    }
    
})