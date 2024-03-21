class Voo{
    constructor(companhiaArea, origem, destino, dataPartida, precoPassagem){
        this.companhiaArea = companhiaArea
        this.origem = origem
        this.destino = destino
        this.dataPartida = dataPartida
        this.precoPassagem = precoPassagem
    }

    informacoesVoo(){
        let str = `Companhia Aérea: ${this.companhiaArea} | Origem: ${this.origem} | Destino: ${this.destino}\nData de partida: ${this.dataPartida} | Preço da passagem: ${this.precoPassagem}`
        return str
    }
}

const voo = new Voo('LATAM Airlines', 'Porto Alegre - Brasil', 'Vancouver - Canada', '17/02/24', 7000)
console.log(voo.informacoesVoo())