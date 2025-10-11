import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        System.out.println("Gnomes:");
        for(int i = 0; i<N; i++){
            int a,b,x;
            a=sc.nextInt();
            b=sc.nextInt();
            x=sc.nextInt();
            if((a<=b && b<=x) || (x<=b && b<=a)){
                System.out.println("Ordered");
            }else{
                System.out.println("Unordered");
            }
        }
    }
}