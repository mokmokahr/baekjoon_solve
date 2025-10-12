import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int length = sc.nextInt();
        sc.nextLine();
        String s = sc.nextLine();
        for(int i = 0; i<length; i++){
            if(s.charAt(i)>='A' && s.charAt(i)<='Z'){
                System.out.print((char)((s.charAt(i)+n-'A')%26+'A'));
            }
            else if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                System.out.print((char)((s.charAt(i)+n-'a')%26+'a'));
            }
            else{
                System.out.print(s.charAt(i));
            }
        }
    }
}