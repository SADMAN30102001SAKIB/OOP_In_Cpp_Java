import java.util.ArrayList;

public class topic8 {
    public static void main(String[] args) {
        ArrayList<Integer> ax = new ArrayList<>();
        ax.add(10);
        ax.add(50);
        ax.add(70);
        ax.add(30);
        ax.add(1, 60);
        System.out.println("Element at index 2  : " + ax.get(2));
        ax.remove(3);
        ax.remove(0);
        ax.sort(null);
        for (int x : ax) {
            System.out.print(x + " ");
        }
        ax.clear();
    }
}
