interface AI {
    void printA();
}

interface BI {
    void printB();
}

interface CI {
    void printC();
}

class A implements AI, BI, CI {
    public void printA() {
        System.out.println("A");
    }

    public void printB() {
    }

    public void printC() {
    }
}

class B extends A {
    public void printB() {
        System.out.println("B");
    }
}

class C extends B {
    public void printC() {
        System.out.println("C");
    }
}

public class CSE2 {
    public static void main(String[] args) {
        C c = new C();
        c.printA();
        c.printB();
        c.printC();
    }
}
