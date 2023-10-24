const formRegras = document.getElementById('form-regras')

const {categoria} = formRegras;
const containerRegras = document.getElementById('container-regras')
const containerAcao = document.getElementById('container-acao')
let valorCategoria = categoria.value;

categoria.addEventListener('change', async () => {
    valorCategoria = categoria.value
    containerRegras.innerHTML = ''
    popularRegras(valorCategoria)
})

const popularRegras = async (valorCategoria) => {
    const response = await fetch(`/vars/${valorCategoria}`)
    const valoresAcao = await response.json()
    let vars = []
    if(valorCategoria == 'cpu'){
        vars = ['processador', 'socket', 'performace_gpu']
        valorAcao(valorCategoria)
    }
    else if(valorCategoria == 'gpu'){
        vars = ['marca_gpu', 'finalidade', 'desempenho_cpu', 'potencia_fonte']
        valorAcao(valorCategoria)
    }
    else if(valorCategoria == 'armazenamento'){
        vars = ['tipo_armazenamento', 'suporte_NVMe', 'espaco']
        valorAcao(valorCategoria)
    }
    else if(valorCategoria == 'ram'){
        vars = ['tipo_ram', 'mhz_ram', 'capacidade_ram', 'slots_ram']
        valorAcao(valorCategoria)
    }
    
    for(let key of vars){
            let response = await fetch(`/vars/${key}`)
            let valoresVariaveis = await response.json()
            
            criarElementos(valoresVariaveis.varName, valoresVariaveis.values)
        }
}

const criarElementos = (nome, valores) => {
    const select = document.createElement('select');
    select.name = nome;
    select.id = nome;
    
    const pElement = document.createElement('p')
    pElement.textContent = nome;
    for(let valor of valores){
        let opt = document.createElement('option')
        opt.value = valor
        opt.id = valor
        opt.textContent = valor
        select.appendChild(opt)
    }

    containerRegras.appendChild(pElement)
    containerRegras.appendChild(select)
}

const valorAcao = async (categoria) => {
    containerAcao.innerHTML = ''
    const response = await fetch(`/vars/${categoria}`)
    const json = await response.json()
    const valores = json.values

    const select = document.createElement('select');
    select.name = 'select-acao';
    select.id = 'select-acao';
    
    console.log(valores)
    for(let valor of valores){
        let opt = document.createElement('option')
        opt.value = valor
        opt.id = valor
        opt.textContent = valor
        select.appendChild(opt)
    }

    containerAcao.appendChild(select)
}