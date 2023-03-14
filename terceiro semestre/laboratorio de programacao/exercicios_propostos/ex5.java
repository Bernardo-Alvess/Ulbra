public class ex5 {
    public static void main(String[] args) {
        int dia = 12;
        int mes = 3;
        int ano = 2023;
        boolean isDataValid = true;

        if(ano < 1 || mes < 1 ||mes > 12){
            isDataValid = false;
        }else if(mes == 2){
            if(dia > 28 || dia < 1){
                isDataValid = false;
            }
        }else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia < 1 || dia > 30) {
                isDataValid = false;
            }
        } else {
            if (dia < 1 || dia > 31) {
                isDataValid = false;
            }
        }

        if (isDataValid) {
            System.out.println("A data " + dia + "/" + mes + "/" + ano + " é válida.");
        } else {
            System.out.println("A data " + dia + "/" + mes + "/" + ano + " é inválida.");
        }

    }
}
