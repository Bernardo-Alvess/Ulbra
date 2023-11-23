class Pilha{
    constructor(){
        this.pilha = []
    }

    mostrarPilha(){
        console.log(this.pilha)
    }

    push(element){
        this.pilha.unshift(element)
    }

    pop(){
        return this.pilha.shift()
    }

    top(){
        return this.pilha[0]
    }
}

class Fila{
    constructor(){
        this.fila = []
    }

    mostrarFila(){
        console.log(this.fila)
    }

    enqueue(element){
        this.fila.push(element)
    }

    dequeue(){
        return this.fila.shift()
    }
}

let pilhaArr = []
let filaArr = []
let fila = new Fila()
let pilha = new Pilha()

pilha.push('A')
pilha.push('B');
pilha.push('C');

fila.enqueue(pilha.top());
fila.enqueue(pilha.top());
fila.enqueue('D');

pilha.push(fila.dequeue());
fila.enqueue(fila.dequeue());
fila.enqueue(pilha.pop());
pilha.push('E');
fila.enqueue('E');
pilha.pop();

pilha.mostrarPilha()
fila.mostrarFila()