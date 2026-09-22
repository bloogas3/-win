import java.util.Scanner;

public class LoopDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int s = 0;
        for (int i = 0; i < 123; i++) {
            s += x;
        }
        System.out.println(s);
    }
}