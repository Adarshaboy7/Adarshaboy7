import java.util.*;
class medicine
{
	public void displaylabel()
	{
		System.out.println("Medicine Name ::calpol 650");
		System.out.println("Company Name ::gsk");
	}
}
class tablet extends medicine
{
	public void displaylable()
	{
		super.displaylabel();
		System.out.println("store in a cool dry plance");
	}
}
class syrup extends medicine
{
	public void displaylable()
	{
		super.displaylabel();
		System.out.println("stay away from children");
	}
}
class oinment extends medicine
{
	public void displaylable()
	{
		super.displaylabel();
		System.out.println("for external use only");
	}
}
class test_medicine
{
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		medicine[] x;
		x=new medicine[5];
		for(int j=0;j<x.length;j++)
		{
			System.out.println("enter choice(1-3):");
			int i=sc.nextInt();
			if(i==1)
				x[j]=new tablet();
			else if (i==2)
				x[j]=new syrup();
			else if (i==3)
				x[j]=new oinment();
		}
		for (int k=0;k<x.length;k++)
		{
			x[k].displaylabel();
		}
	}
}
