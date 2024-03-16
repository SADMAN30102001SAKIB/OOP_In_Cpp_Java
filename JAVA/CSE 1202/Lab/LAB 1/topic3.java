class MyClass1 {
    private int privateField;

    public MyClass1(int v1) {
        this.privateField = v1;
    }

    public void accessPrivateField() {
        System.out.println(privateField);
    }
}

public class topic3 {
    public static void main(String[] args) {
        MyClass1 myObject1 = new MyClass1(2);
        myObject1.accessPrivateField();

        // System.out.println("private = " + myObject1.privateField);
    }
}
