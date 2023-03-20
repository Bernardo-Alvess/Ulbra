// Escreva um programa em Java que solicita um número
// inteiro positivo e imprime a tabuada desse número até o
// número 10. Utilize um loop for para realizar a impressão.

import java.util.Scanner;

public class ex03 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num;

        do {
            System.out.print("Digite um número inteiro positivo: ");
            num = input.nextInt();
        } while (num <= 0);

        System.out.println("Tabuada do " + num + ":");
        for (int i = 1; i <= 10; i++) {
            System.out.println(num + " x " + i + " = " + (num*i));
        }
    }
}

