import java.util.*;
interface pollygon
{
	public void calcArea();
	public void calcPeri();
	public void display();
}
class rectangle implements pollygon
{
	private float area,perimeter,breath,length;
	public rectangle()
	{
		length=0;
		breath=0;
	}
	public rectangle(float l,float b)
	{
		length=l;
		breath=b;
	}
	public void calcArea()
	{
		area=length*breath;
	}
	public void calcPeri()
	{
		perimeter=2*(length+breath);
	}
	public void display()
	{
		System.out.println("Area of the"+area);
		System.out.println("area of the"+perimeter);
	}
}
class squre implements pollygon
{
	private float area,side,periment;
	public squre()
	{
		side=0;
	}
	public squre(float s)
	{
		side=s;
	}
	public void calcArea()
	{
		area=side*side;
	}
	public void calcPeri()
	{
		periment=4*side;
	}
	public void display()
	{
		System.out.println("Area of the squre is:"+area);
		System.out.println("perimeter of the squre is"+periment);
	}
	public static void main(String[]args)
	{
		squre s1=new squre(3);
		s1.calcArea();
		s1.calcPeri();
		s1.display();  
			
		rectangle s2=new rectangle(6,4);
		s2.calcArea();
		s2.calcPeri();
		s2.display();
	}
}
