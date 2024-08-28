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
			File f1=new File("ad1.txt");
			FileOutputStream w=new FileOutputStream(f1);
			System.out.println("Enter String::");
			s=d.readLine();
			byte[] b=s.getBytes();
			w.write(b);
			w.close();
		}
		catch(IOException e1)
			
		{
		}
	}
	public void read() throws IOException
	{
		File f1=new File("ad1.txt");
		FileInputStream r=new FileInputStream(f1);
		int c;
		while((c=r.read())!=-1)
		{
			System.out.print((char)c);
		}
		r.close();
	}
	public void freq_char() throws IOException
	{
		File f1=new File("ad1.txt");
		FileInputStream r= new FileInputStream(f1);
		int c;
		String t="";
		while((c=r.read())!=-1)
		{
			t=t+((char)c);
		}
		System.out.println();
		t=t.toLowerCase();
		for(int i=97;i<=122;i++)
		{
			int ct=0;
			for(int j=0;j<t.length();j++)
			{
				if(t.charAt(j)==i)
					ct++;
			}
			if(ct!=0)
				System.out.println(((char)i)+" "+ct);
		}
		r.close();
	}
	public static void main(String[]args)throws IOException
	{
		f1 k=new f1();
		k.write();
		k.read();
		k.freq_char();
	}
}
