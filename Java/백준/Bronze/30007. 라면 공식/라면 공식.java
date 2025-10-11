import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i = 0; i<N; i++){
            int a,b,x;
            a=sc.nextInt();
            b=sc.nextInt();
            x=sc.nextInt();
            System.out.println(a*(x-1)+b);
        }
    }
}