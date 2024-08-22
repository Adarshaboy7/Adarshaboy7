import java.io.*;
class fraction1
{
	private int num,den;
	public fraction1()
	{
		num=1;
		den=1;
	}
	public fraction1 (int p, int q)
	{
		num=p;
		den=q;
	}
	public void read()
	{
		while(true)
		{
			try
			{
			BufferedReader dd=new BufferedReader(new InputStreamReader(System.in));
			System.out.print("Enter Num no:");
		
			num=Integer.parseInt(dd.readLine());
			System.out.print("Enter Den no");
			den=Integer.parseInt(dd.readLine());
			break;
			}
			catch(IOException e1)
			{
				System.out.println("input error");
			}
			catch(ArithmeticException e2)
			{
				System.out.println("deno>0"+e2.getMessage());
			
				
			}
			catch(NumberFormatException e3)
			{
				System.out.println("invalid format");
			}
			finally
			{
				System.out.println("Thank You");
			}
		}
	}
	
	public void disp()
	{
		
		System.out.println(num+"/"+den);
	}
	public static int lcm(int a, int b)
	{
		int r,i=1;
		r=a*i;
	
		while(r%b!=0)
		{
			i++;
			r=a*i;
		}
		return r;
	} 
	public static fraction1 add(fraction1 f1,fraction1 f2)
	{
		fraction1 f3=new fraction1();
		int u=lcm(f1.den,f2.den);
		f3.den=u;
		f3.num=((u/f1.den)*f1.num+(u/f2.den)*f2.num);
		return f3;
	}
}
class abc
{
	public static void main(String[]args)
	{
		fraction1 a=new fraction1();
		fraction1 b=new fraction1();
		a.read();
		a.disp();
		b.read();
		b.disp();
		fraction1 f3=fraction1.add(a,b);
		f3.disp();
	}
}
