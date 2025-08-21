import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String inp = scanner.nextLine();
        int year = Integer.parseInt(inp);
        int diff = 2541-1998;
        System.out.println(year-diff);
    }
}