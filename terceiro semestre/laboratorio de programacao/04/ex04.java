// 4. Escreva um programa em Java que solicita um número
// inteiro positivo e imprime todos os números pares entre 1
// e esse número. Utilize um loop while para realizar a
// impressão.

import java.util.Scanner;

public class ex04 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Digite um número inteiro positivo: ");
        int num = input.nextInt();
        
        int i = 1;
        while (i <= num) {
            if (i % 2 == 0) {
                System.out.println(i);
            }
            i++;
        }
    }
}
