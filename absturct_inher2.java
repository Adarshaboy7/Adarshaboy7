import java.util.*;
abstract class instrument
{
	abstract public void play();
}
class piano extends instrument
{
	public void play()
	{
		System.out.println("tan tan tan tan");
	}
}
class flute extends instrument
{
	public void play()
	{
		System.out.println("toot toot toot toot");
	}
}
class guiter extends instrument
{
	public void play()
	{
		System.out.println("tin tin tin tin");
	}
}
class text
{
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		instrument[] x;
		x=new instrument[5];
		int j=0;
		while(j<x.length)
		{
			double z=Math.random();
			int i=(int)(10*z);
			System.out.println(z+" "+i);
			if(i==1)
				x[j++]=new piano();
			else if(i==2)
				x[j++]=new flute();
			else if(i==3)
				x[j++]=new guiter();
		}
		for(int k=0;k<x.length;k++)
		{
			if(x[k] instanceof piano==true)
			{
				System.out.print("obj of piano=>");
			}
			else if(x[k] instanceof flute==true)
				System.out.print("obj of flute=>");
			else if(x[k] instanceof flute==true)
				System.out.print("obj of guiter=>");
			x[k].play();
		}
	}
}
