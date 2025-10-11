import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        int sumA =0,sumB=0;
        int a = Integer.parseInt(n.substring(0,n.length()/2));
        int b = Integer.parseInt(n.substring(n.length()/2));
        while(a != 0 || b != 0){
            sumA += a%10;
            sumB += b%10;
            a=a/10;
            b=b/10;
        }
        if(sumA==sumB){
            System.out.println("LUCKY");
        }else{
            System.out.println("READY");
        }
    }
}