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
		while(true)
		{
		try
		{
			BufferedReader dd=new BufferedReader(new InputStreamReader(System.in));
			for(int i=0;i<x.length;i++)
			{
					System.out.print ("x["+i+"]=" );
					x[i]=Integer.parseInt(dd.readLine());
			}
			break;
		}
		catch(IOException e)
		{
			System.out.println ("input error  "+e.getMessage());
		}
		catch(ArrayIndexOutOfBoundsException e1)
		{
			System.out.println ("over flow");
		}
		catch(NumberFormatException e2)
		{
			System.out.println ("invalid format");
		}
		finally
		{
			System.out.println ("thank you");
		}
		}
		
	}
	public void disp()
	{
			for(int i=0;i<x.length;i++)
			{
					System.out.println (x[i] );
			}
	}
	
	public void bubble()
	{
	   int i,j,t;
	   for(i=0;i<x.length-1;i++)
	   {
	   	for(j=0;j<x.length-1-i;j++)
	   	{
	   		if(x[j]>x[j+1])
	   		{
	   			t=x[j];
	   			x[j]=x[j+1];
	   			x[j+1]=t;
	   		}
	   	}
	   }
	}

	public static void main (String[] args) throws IOException 
	{
		BufferedReader ds=new BufferedReader(new InputStreamReader(System.in));
		System.out.println ("How many no :");
		int m=Integer.parseInt(ds.readLine());
		
		arr t=new arr(m);
		t.read();
		t.bubble();
		t.disp();
    }
}
