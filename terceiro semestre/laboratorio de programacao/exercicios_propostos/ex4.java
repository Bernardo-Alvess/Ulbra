public class ex4 {
    public static void main(String[] args) {
        int x = 10;
        while(x <= 1000){
            //Usando if-else
            // if(x % 2 == 0){
            // x +=  5;
            // }else{
            //     x *= 2;
            // }
            // System.out.println(x);

            switch(x % 2){
                case 0:
                    x += 5;
                    break;
                case 1:
                    x *= 2;
                    break;
            }
            System.out.println(x);
        }
    }
}
