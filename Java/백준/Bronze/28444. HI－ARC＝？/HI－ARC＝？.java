import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
        for(int i = 0; i<5; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println(arr[0]*arr[1]-arr[2]*arr[3]*arr[4]);
    }
}