import java.io.*;
import java.util.*;
class newthread implements Runnable
{
	String name;
	Thread t;
	newthread(String threadname)
	{
		name=threadname;
		t=new Thread(this,name);
		System.out.println("new thread"+t);
		t.start();
	}
	public void run()
	{
		try
		{
			for(int i=5;i>0;i--)
			{
				System.out.println(name+" :"+i);
				Thread.sleep(1000);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println(name+"interrupted:");
			
		}
		System.out.println(name+"exiting");
	}
}
class demo
{
	public static void main(String[]args)
	{
		newthread ob1=new newthread("one");
		newthread ob2=new newthread("two");
		newthread ob3=new newthread("three");
		System.out.println("thread one is alive:"+ob1.t.isAlive());
			System.out.println("thread two is alive:"+ob2.t.isAlive());
				System.out.println("thread three is alive:"+ob3.t.isAlive());
				try
				{
					System.out.println("wating for threads to finish:");
					ob1.t.join();
					ob2.t.join();
					ob3.t.join();
				}
				catch(InterruptedException e)
				{
					System.out.println("main thread interrupted:");
				}	
				System.out.println("thread one is alive:"+ob1.t.isAlive());
				System.out.println("thread one is alive:"+ob2.t.isAlive());
				System.out.println("thread one is alive:"+ob3.t.isAlive());
				System.out.println("main threadv exiting:");	
	}
}
