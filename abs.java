import java.util.*;
abstract class class1
{
	abstract public void gx();
	
}
abstract class class2
{
	abstract public void fx();
	
}
class ex extends class1
{
	public void gx()
	{
		System.out.println("hello");
	}
}
interface x
{
	final String s="Welcome";
	public void disp(String s);
}
interface y
{
	public void mess();
}
interface z extends x,y
{
	public void show();
	
}
final class q extends ex implements x,y
{
	public void disp(String name)
	{
		System.out.println(s+" "+name);
	}
	public void mess()
	{
		System.out.println("good bye");
	}
}
class test
{
	public static void main(String[]args)
	{
		q w=new q();
		w.disp("ram");
		w.mess();
	}
}
