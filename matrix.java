import java.io.*;
class matrix
{
	private int[][]x;
	private int r,c;
	public matrix()
	{
		r=3;
		c=3;
		x=new int[r][c];
	}
	public matrix(int m,int n)
	{
		this.r=m;
		this.c=n;
		x=new int[r][c];
	}
	public void read()
	{
		try
		{
			BufferedReader ds=new BufferedReader(new InputStreamReader(System.in));
			int i,j;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					System.out.print("x["+i+"]["+j+"]=");
					x[i][j]=Integer.parseInt(ds.readLine());
				}
			}
		}
			catch(IOException e)
			{
				System.out.println("input error");
			}
		}
		public void disp()
		{
			int i,j;
			System.out.println("Matrix:");
			for (i=0;i<x.length;i++)
			{
				for(j=0;j<x[0].length;j++)
				{
					System.out.print(x[i][j]+" ");
				}
				System.out.println();
			}
		}
		public matrix transpose()
		{
			matrix u=new matrix(c,r);
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					u.x[j][i]=this.x[i][j];
				}
			}
			return u;
		}
		public static void main(String[]args)throws IOException
		{
			BufferedReader ds=new BufferedReader(new InputStreamReader(System.in));
			System.out.println("Enter row=");
			int p=Integer.parseInt(ds.readLine());
			System.out.println("Enter col=");
			int q=Integer.parseInt(ds.readLine());
			matrix m1=new matrix(p,q);
			m1.read();
			m1.disp();
			matrix m2=m1.transpose();
			m2.disp();
		}
	
}
