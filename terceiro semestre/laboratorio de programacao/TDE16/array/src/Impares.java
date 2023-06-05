public class Impares {
    public static void main(String[] args) {
        int[] numerosImpares = new int[10];

        int slots = 0;
        int i = 0;

        while(slots < 10){
            if(i % 2 != 0){
                numerosImpares[slots] = i;
                slots++;

            }
            i++;
        }

        for(int j = 0; j < numerosImpares.length; j++){
            System.out.println(numerosImpares[j]);
        }
    }
}
