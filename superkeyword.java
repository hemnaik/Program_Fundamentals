//super keyword with constructor//
class class1
{
    class1()
    {
        System.out.println("HELLO C++");
    }
    class1(class1 a1)
    {
        System.out.println("HELLO JAVA");
    }
}
class class2 extends class1
{
    class2()
    {
        System.out.println("HELLO ANDROID");
    }
    class2(class2 a2)
    {
        super(a2);
        System.out.println("HELLO PHP");
    }
}
class class3 extends class2
{
    class3()
    {
        System.out.println("HELLO DATA STRUCTURE");
    }
    class3(class3 a3)
    {
        super(a3);
        System.out.println("HELLO OS");
    }
}
public class abcd
{
    public static void main(String args[])
    {
          class3 a1=new class3();
          class3 a2=new class3(a1);
    }
}
