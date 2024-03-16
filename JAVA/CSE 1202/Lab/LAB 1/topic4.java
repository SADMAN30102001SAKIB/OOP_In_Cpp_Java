public class topic4 {
    static int staticField = 42;
    int nonStaticField = 10;

    void nonStaticMethod() {
        System.out.println("This is a non-static method.");
    }

    static void staticMethod() {
        System.out.println("This is a static method.");
        System.out.println("Static Field: " + staticField);
        // System.out.println("Non-Static Field: " + nonStaticField); // error
        // nonStaticMethod(); // error
    }

    public static void main(String[] args) {
        staticMethod();
    }
}
