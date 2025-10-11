import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        for(int i = 0; i<N; i++){
            int n = sc.nextInt();
            if(n*n <= a*a+b*b){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}