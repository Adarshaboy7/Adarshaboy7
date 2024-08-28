import java.io.*;
import java.util.*;
class f1
{
	private String s;
	public void write()
		
	{
		try
		{
			BufferedReader d=new BufferedReader(new InputStreamReader(System.in));
			FileWriter f=new FileWriter("xy.txt");
			BufferedWriter wr=new BufferedWriter(f);
			while(true)
			{
				System.out.println("Enter String::");
				s=d.readLine();
				s=s.toLowerCase();
				if(s.equals("end"))
					break;
				wr.write(s);
				wr.write("\n");
			}
			wr.close();
		}
		catch(IOException e1)
		{
		}
	}
	public void read() throws IOException
	{
		FileReader fr=new FileReader("xy.txt");
		BufferedReader br=new BufferedReader(fr);
		String k="";
		while((k=br.readLine())!=null)
		{
			System.out.println(k);
		}
		br.close();
	}
	public void freq_word() throws IOException
	{
		int i,j;
		FileReader fr=new FileReader("xy.txt");
		BufferedReader br=new BufferedReader(fr);
		String k="",t="";
		while((k=br.readLine())!=null)
		{
			t=t+k+" ";
		}
		t=t.trim();
		String[] x=t.split(" ");
		 
	int n=x.length;
	int[] c=new int[n];
	for(i=0;i<n;i++)
	{
		c[i]=1;
		for(j=0;j<i;j++)
		{
			if(x[j].equals(x[i])==true)
			{
				c[j]++;
				c[i]=-1;
				break;
			}
		}
	}
	for (i=0;i<n;i++)
		if(c[i]!=-1)
			System.out.println(x[i]+" "+c[i]);
			br.close();
	}
	public static void main(String[]args)throws IOException
	{
		f1 k=new f1();
		k.write();
		k.read();
		k.freq_word();
	}
}
