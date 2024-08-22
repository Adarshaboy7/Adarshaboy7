import java.io.*;
import java.util.*;
class str
{
	private String s;
	public str()
	{
		s="";
	}
	public str(String t)
	{
		s=t;
	}
	public void read()
	{
		try
		{
			BufferedReader d=new BufferedReader(new InputStreamReader(System.in));
			System.out.println("enter string:");
			s=d.readLine();
		}
		catch(IOException e)
		{
			System.out.println("input error");
		}
	}
	public void rev()
	{
		String r="";
		String x;
		for(int i=0;i<s.length();i++)
		{
			x=s.substring(i,i+1);
			r=x+r;
		}
		System.out.println("reverse=>"+r);
		if(r.equals(s)==true)
			System.out.println("palindrome");
		else
			System.out.println("not palindrome");
	}
	public void frq()
	{
		s=s.toLowerCase();
		for(int i=97;i<=122;i++)
		{
			char d=(char)i;
			int c=0;
			for(int j=0;j<s.length();j++)
			{
				if(s.charAt(j)==d)
				{
					c++;
				}
			}
			if(c!=0)
			{
				System.out.println(d+" "+c);
			}
		}
	}
public void find()
{
	try
	{
		int c=0;
		String e,f,w;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("find what?");
		w=br.readLine();
		w=w.toLowerCase();
		s=s.toLowerCase();
		StringTokenizer t=new StringTokenizer(s);
		int c1=t.countTokens();
		while(t.hasMoreTokens()==true)
		{
			f=t.nextToken();
			if(f.equals(w)==true)
				c++;
		}
		System.out.println("freq.of words:"+c+"/"+c1);
	}
	catch(IOException e)
	{
		System.out.println("input error");
	}
}
public void sort()
{
	int i,j;
	String[] x=s.split(",");
	for(i=0;i<x.length-1;i++)
	{
		for(j=0;j<x.length-1-i;j++)
		{
			if(x[j].compareTo(x[j+1])>0)
			{
				String t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	for(i=0;i<x.length;i++)
	{
		System.out.println(x[i]);
	}
}	
public static void main(String[]args)
{
	str u=new str();
	u.read();
	//u.rev();
	//u.frq();
	u.find();
	//u.sort();
}
}


    
    
