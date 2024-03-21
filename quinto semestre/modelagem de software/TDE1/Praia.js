class Praia{
    constructor(nome, localizacao, temperaturaAgua, tipoAreia){
        this.nome = nome
        this.localizacao = localizacao
        this.temperaturaAgua = temperaturaAgua
        this.tipoAreia = tipoAreia
    }

    informacoesPraia(){
        let str =`Nome da praia: ${this.nome} | Local da praia: ${this.localizacao} \nTemperatura da água: ${this.temperaturaAgua} | Tipo da areia: ${this.tipoAreia}`
        return str
    }
}

let praia = new Praia('Praia dos Ingleses', 'Florianópolis', '14', 'areia branca')

console.log(praia.informacoesPraia())