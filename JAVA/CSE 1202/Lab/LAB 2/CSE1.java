class A {
    int x;

    public A() {
        x = 0;
    }

    public A(int x) {
        this.x = x;
    }

    public int getX() {
        return (x + 10);
    }
}

class B extends A {
    int x = 20;

    public B() {
        x = 0;
    }

    public B(int x) {
        super(x);
        this.x = x;
    }

    public int getX() {
        return (x + 10);
    }

    public int getx() {
        return super.x;
    }

    public int getAX() {
        return super.getX();
    }
}

public class CSE1 {
    public static void main(String[] args) {
        B b = new B(10); // calling parameterized constructor
        System.out.println(b.getx()); // displaying x of class A
        System.out.println(b.getAX()); // calling getX() of class A
    }
}