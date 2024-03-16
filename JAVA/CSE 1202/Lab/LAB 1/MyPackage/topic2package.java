package mypackage;

class MyClass2 {
    private int privateField;
    int defaultField;
    protected int protectedField;
    public int publicField;

    public MyClass2() {
        this.privateField = 0;
        this.defaultField = 0;
        this.protectedField = 0;
        this.publicField = 0;
    }

    public MyClass2(int v1, int v2, int v3, int v4) {
        this.privateField = v1;
        this.defaultField = v2;
        this.protectedField = v3;
        this.publicField = v4;
    }

    public void accessPrivateField() {
        System.out.println(privateField + ", " + defaultField + ", " + protectedField + ", " + publicField);
    }
}
