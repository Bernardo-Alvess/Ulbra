class Aluno{
    constructor(nome, matricula, idade, curso){
        this.nome = nome
        this.matricula = matricula
        this.idade = idade
        this.curso = curso
    }

    mostrarInformacoes(){
        console.log
        (`Nome: ${this.nome}\nMatricula: ${this.matricula}\nIdade: ${this.idade}\nCurso: ${this.curso}`)
    }
}

let aluno = new Aluno('Bernardo', 123, 20, 'ADS')
aluno.mostrarInformacoes()