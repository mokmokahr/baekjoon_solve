import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int a,b,c;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        if((a<b && b<c) || (c<b &&b<a)){
            System.out.println(b);
        }else if((b<a && a<c) || (c<a && a<b)){
            System.out.println(a);
        }else{
            System.out.println(c);
        }
    }
}
