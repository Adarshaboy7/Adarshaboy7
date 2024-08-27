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
		for(int j=0;j<x.length;j++)
		{
			System.out.println("Enter 1.piano 2.flute 3.guiter");
			System.out.println("choice?");
			int i=sc.nextInt();
			if(i==1)
				x[j]=new piano();
			else if (i==2)
				x[j]=new flute();
			else if (i==3)
				x[j]=new guiter();
				
		}
		for (int k=0;k<x.length;k++)
		{
			x[k].play();
		}
	}
}
