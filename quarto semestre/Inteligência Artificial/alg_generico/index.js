class Individual{
    constructor(){
        this.weight1 = this.generateNumber()
        this.weight2 = this.generateNumber()
        this.input1 = this.generateNumber()
        this.input2 = this.generateNumber()
    }

    generateNumber(){
        let result = Math.random()
        return result > 0.5 ? 1 : 0
    }

    setValues(weight1, weight2, input1, input2){
        this.weight1 = weight1
        this.weight2 = weight2
        this.input1 = input1
        this.input2 = input2
    }
}

function generateIndividual(){
    let individual = new Individual()
    return individual
}

const population = []

function generatePopulation(x){
    for(let i = 0; i < x; i++){
        population.push(generateIndividual())
    }
}

function aptitudeTest(population){
    for (let i = 0; i < 6; i++) {
        const index = parseInt(Math.random(population.length))
        const randomIndividual = population[index]
        population.splice(randomIndividual, 1)
    }
    return population
}


function naturalSelection(population){
    const crossover = population.slice(0,2)
    const mutation = population.slice(2,4)
    const mutants = newMutation(mutation)
    const childs = newCrossover(crossover)
    population.push(childs, mutants)
}

function newMutation(arr){
    let mutantArr = []
    arr.forEach(element => {
        const valueToChange = parseInt(Math.random(4))
        switch(valueToChange){
            case 1:
                element.weight1 == 1 ? 0 : 1
            case 2:
                element.weight2 == 1 ? 0 : 1
            case 3:
                element.input1 == 1 ? 0 : 1
            case 4:
                element.input2 == 1 ? 0 : 1
            default:
                break;
        }
        mutantArr.push(element)
    });
    return mutantArr
}

function newCrossover(arr){
    const childrens = []
    for(let i = 0; i < arr.length; i++){
        const father = arr[i]
        i++
        const mother = arr[i]

        let child1 = generateIndividual()
        let child2 = generateIndividual()

        child1.setValues(
            mother.weight1 === 1 ? 0 : 1,
            father.weight2,
            father.input1 === 1 ? 0 : 1,
            father.input2
        )

        child2.setValues(
            father.weight1 === 1 ? 0 : 1,
            mother.weight2,
            mother.input1 === 1 ? 0 : 1,
            mother.input2
        )
        childrens.push(child1, child2)
    }
    return childrens
}

generatePopulation(10)
console.table(population)
aptitudeTest(population)
console.table(population)
naturalSelection(population)
console.table(population)