import java.io.*;
class node
{
	String name;
	node next;
}
class linklist
{
	private node start;
	public linklist()
	{
		start=null;
	}
	public void insend() throws IOException
	{
		DataInputStream d=new DataInputStream(System.in);
		node cur=new node();
		cur.next=null;
		System.out.println("Enter Name:");
		cur.name=d.readLine();
		if(start==null)
		{
			start=cur;
			return;
		}
		node c=start;
		while(c.next!=null)
		{
			c=c.next;
		}
		c.next=cur;
	}
	public void list()
	{
		node c=null;
		System.out.println("\n"+"list:");
		for(c=start;c!=null;c=c.next)
		{
			System.out.println(c.name);
		}
	}
}
class test
{
	public static void main(String[]args)throws IOException
	{
		linklist ls=new linklist();
		int t=0;
		DataInputStream y=new DataInputStream(System.in);
		do
		{
			System.out.println("press 1 for ins end"+"\n"+"press 2 for list"+"\n"+"press 3 for end");
			System.out.println("Enter your choice:");
			t=Integer.parseInt(y.readLine());
			switch(t)
			{
				case 1:
					ls.insend();
					ls.list();
					break;
				case 2:
					ls.list();
					break;
			}
		}while(t!=3);
	}
}
