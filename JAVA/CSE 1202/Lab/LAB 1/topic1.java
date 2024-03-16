import java.util.Scanner;

public class topic1 {
    public static void main(String[] args) {
        // i)
        System.out.println("Sadman Sakib");
        System.out.println("Hazipara, Thakurgaon");

        // ii)
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        if (a > b) {
            System.out.println(a + " is bigger");
        } else {
            System.out.println(b + " is bigger");
        }

        // iii)
        int max = Integer.MIN_VALUE, min = Integer.MAX_VALUE, sum = 0;
        int[] arr = new int[10];

        for (int i = 0; i < 10; i++) {
            arr[i] = scanner.nextInt();
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
            sum += arr[i];
        }

        double avg = (sum * 1.0) / arr.length;
        System.out.println("max = " + max);
        System.out.println("min = " + min);
        System.out.println("avg = " + avg);

        scanner.close();
    }
}