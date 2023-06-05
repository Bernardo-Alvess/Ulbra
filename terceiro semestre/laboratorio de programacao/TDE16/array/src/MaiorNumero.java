public class MaiorNumero {
    public static void main(String[] args) {
        int[] valores = {23, 1, 34, 89, 2};

        int maiorValor = valores[0];

        for(int i = 0; i < valores.length; i++){
            if(maiorValor < valores[i]){
                maiorValor = valores[i];
            }
        }

        System.out.printf("O maior valor é: %d", maiorValor);
    }
}
