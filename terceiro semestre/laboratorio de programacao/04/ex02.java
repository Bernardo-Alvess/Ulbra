// Escreva um programa em Java que recebe um número
// inteiro positivo e imprime se ele é um número primo ou
// não. Utilize um loop for para testar se o número é primo.

import java.util.Scanner;

public class ex02 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Digite um número inteiro positivo: ");
        int n = input.nextInt();
        boolean isPrimo = true;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrimo = false;
                break;
            }
        }


        if(isPrimo){
            System.out.println("O numero é primo");
        }else{
            System.out.println("Não é um numero primo");
        }
    }
}
