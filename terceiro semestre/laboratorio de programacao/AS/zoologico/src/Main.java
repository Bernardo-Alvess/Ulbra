import java.rmi.MarshalException;

public class Main {
    public static void main(String[] args) {
        Animal tartaruga = new Animal("Martelinho", 50, 100, "Tartaruga-marinha-comum");
        tartaruga.movimentar();
        tartaruga.movimentar("Girando");

        Mamifero cachorro = new Mamifero("Rex", 4, 47, "American Bully", "lisa");
        cachorro.movimentar();
        cachorro.movimentar("Pulando");

        Ave papagaio = new Ave("Lil papa", 12, 400, "Papagaio-cinzento", 52);
        papagaio.voar();
        papagaio.realizarTruque();
        papagaio.movimentar();
        papagaio.movimentar("Mortal de costas");



        Veterinario veterinario1 = new Veterinario("João Luciano", "Responsável Técnico em Zoológico",2400, "Eutanásia");
        veterinario1.realizarExame(papagaio); //R.I.P Lil Papa
        Veterinario veterinario2 = new Veterinario("Mario Silva", "Veterinário Geral", 5000.0, "Pequenos animais");
        Veterinario veterinario3 = new Veterinario("Pedro Oliveira", "Veterinário de Exóticos", 4500.0, "Animais exóticos e silvestres");
        Funcionario funcionario1 = new Funcionario("Pedro Santos", "Tio da limpeza", 2300);
        Funcionario funcionario2 = new Funcionario("João Marcos", "O cara que alimenta os tigres", 3000);

        Zoo zoo = new Zoo(3, 5);

        zoo.adicionar(tartaruga);
        zoo.adicionar(papagaio);
        zoo.adicionar(cachorro);
        zoo.adicionar(cachorro);
        zoo.adicionar(cachorro);
        zoo.adicionar(cachorro);
        zoo.adicionar(cachorro);


        zoo.adicionar(veterinario1);
        zoo.adicionar(veterinario2);
        zoo.adicionar(veterinario3);
        zoo.adicionar(funcionario1);
        zoo.adicionar(funcionario2);
        zoo.adicionar(funcionario2);
        zoo.adicionar(funcionario2);
        zoo.adicionar(funcionario2);
        zoo.adicionar(funcionario2);
        zoo.adicionar(funcionario2);

    }
}