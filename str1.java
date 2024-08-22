import java.io.*;
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
	
public static void main(String[]args)
{
	str u=new str();
	u.read();
	//u.rev();
	u.frq();
	
}
}


    
    
