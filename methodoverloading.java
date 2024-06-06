//method overloading in java//
public class methodoverloading
{
    public void zubin()
    {
        System.out.println("HELLO C++");
    }
    public void zubin(int x)
    {
        System.out.println("HELLO JAVA");
    }
    public void zubin(String a)
    {
        System.out.println("STRING="+(a.toUpperCase()));
    }
    public int zubin(int a,int b)
    {
        return a+b;
    }
    public static void main(String args[])
    {
        methodoverloading a1=new methodoverloading();
        a1.zubin();
        a1.zubin(10);
        a1.zubin("hemnaik");
        int x=a1.zubin(100,200);
        System.out.println("ADDITION="+x);
    }
}