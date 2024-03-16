class MyClass1 {
    private int privateField;
    int defaultField;
    protected int protectedField;
    public int publicField;

    public MyClass1(int v1, int v2, int v3, int v4) {
        this.privateField = v1;
        this.defaultField = v2;
        this.protectedField = v3;
        this.publicField = v4;
    }

    // within class
    public void accessPrivateField() {
        System.out.println(privateField + ", " + defaultField + ", " + protectedField + ", " + publicField);
    }
}

public class topic2 {
    public static void main(String[] args) {
        MyClass1 myObject1 = new MyClass1(2, 5, 6, 1);
        myObject1.accessPrivateField();

        // within package
        System.out.println("public = " + myObject1.publicField);
        System.out.println("protected = " + myObject1.protectedField);
        System.out.println("default = " + myObject1.defaultField);
        // System.out.println("private = " + myObject1.privateField);
    }
}
