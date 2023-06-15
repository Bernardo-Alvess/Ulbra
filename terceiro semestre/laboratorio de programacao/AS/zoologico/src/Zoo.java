    public class Zoo {
        Animal[] animais;
        Funcionario[] funcionarios;
        int qtdFuncionarios = 0;
        int qtdAnimais = 0;
        public Zoo(int numAnimais, int numFuncionarios){
            animais = new Animal[numAnimais];
            funcionarios = new Funcionario[numFuncionarios];

        }
        public void adicionarFuncionario(Funcionario funcionario){
            if(this.qtdFuncionarios <= this.funcionarios.length - 1){
                funcionarios[qtdFuncionarios] = funcionario;
                qtdFuncionarios++;
                System.out.printf("Funcionário '%s' adicionado ao time do zoológico | Cargo: %s\n", funcionario.getNome(), funcionario.getCargo());
            }else{
                System.err.println("Número máximo de fúncionarios atingido");
            }
        }

        public void adicionarAnimal(Animal animal){
            if(this.qtdAnimais <= this.animais.length - 1){
                animais[qtdAnimais] = animal;
                qtdAnimais++;
                System.out.printf("Novo animal adicionado ao zoológico | Espécime: %s | Nome: %s", animal.getEspecie(), animal.getNome());
            }else{
                System.err.println("Número máximo de animais atingido");
            }
        }
    }
