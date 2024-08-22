// Linear search
import java.io.*;
class arr
{
	private int[] x;   
	public arr()
	{
	   x=new int[5];
	}
	public arr(int n)
	{
		x=new int[n];
	}
	public void read()
	{
		try
		{
			BufferedReader dd=new BufferedReader(new InputStreamReader(System.in));
			for(int i=0;i<x.length;i++)
			{
					System.out.print ("x["+i+"]=" );
					x[i]=Integer.parseInt(dd.readLine());
			}
		}
		catch(IOException e)
		{
			System.out.println ("input error  "+e.getMessage());
		}
		}
		
	
	public void linear_search()
	{
	   	try
		{
			BufferedReader dd=new BufferedReader(new InputStreamReader(System.in));
			System.out.print ("Find what ?" );
			int d=Integer.parseInt(dd.readLine());
			boolean flag=false;
			for(int i=0;i<x.length;i++)
			{
				if(x[i]==d)
				{
					System.out.println ("position="+i);
					flag=true;
					break;
				}
			}
			if(flag==false)
			{
				System.out.println ("not found");				
			}
		}
		catch(IOException e)
		{
			System.out.println ("input error  "+e.getMessage());
		}
	}

	public static void main (String[] args) throws IOException 
	{
		BufferedReader ds=new BufferedReader(new InputStreamReader(System.in));
		System.out.println ("How many no :");
		int m=Integer.parseInt(ds.readLine());
		
		arr t=new arr(m);
		t.read();
		t.linear_search();
    }
}
