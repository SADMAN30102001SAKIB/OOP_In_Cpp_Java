import java.util.Arrays;

public class topic7 {
    public static void main(String[] args) {
        int[] Arr = { 1, 24, 76, 9, 5, 23, 99 };
        System.out.println(Arrays.toString(Arr));
        int big = FindBig(Arr);
        System.out.println(big);
    }

    public static int FindBig(int[] z) {
        int big = Integer.MIN_VALUE;
        for (int i = 0; i < z.length; i++) {
            if (big < z[i]) {
                big = z[i];
            }
        }
        return big;
    }
}
