import java.util.*;
class student
{
	private int roll,math,beng,total;
	private String name;
	public student()
	{
		roll=math=beng=0;
		name="";
	}
	public student(int r,String nm,int m,int b)
	{
		roll=r;
		math=m;
		beng=b;
		name=nm;
	}
	public int get_roll()
	{
		return roll;
	}
	public String get_name()
	{
		return name;
	}
	public void read()
	{
		Scanner q=new Scanner(System.in);
		System.out.println("Enter roll :");
		roll=q.nextInt();
        System.out.println("Enter math:");
		math=q.nextInt();
		System.out.println("Enter name");
		name=q.next();
		System.out.println("Enter beng");
		beng=q.nextInt();
	
	} 
	public void disp()
	{
		System.out.println("roll :"+roll);
		System.out.println("math :"+math);
		System.out.println("name :"+name);
		System.out.println("beng :"+beng);
		total=math+beng;
		System.out.println("Total :"+total);
	}
}
class school
{
	private ArrayList ls;
	public school()
	{
		ls=new ArrayList<student>();
	}
	public void addnew()
	{
		student s1=new student();
		s1.read();
		ls.add(s1);
	}
	public void list()
	{
		for(int i=0;i<ls.size();i++)
		{
			student t=(student) ls.get(i);
			t.disp();
		}
	}
	public void list_1()
	{
		Iterator ir=ls.iterator();
		while(ir.hasNext()==true)
		{
			student t=(student) ir.next();
			t.disp();
		}
	}
	public void find(int r)
	{
		boolean f=false;
		for(int i=0;i<ls.size();i++)
		{
			student t=(student) ls.get(i);
			if (t.get_roll()==r)
			{
				t.disp();
				f=true;
				break;
			}
		}
		if(f==false)
			System.out.println("not found");
	}
	public void delete(int r)
	{
		boolean f=false;
		for(int i=0;i<ls.size();i++)
		{
			student t=(student) ls.get(i);
			if(t.get_roll()==r)
			{
				ls.remove(t);
				f=true;
				break;
			}
		}
		if(f==false)
			System.out.println("not found");
		}
		public ArrayList name_wisw_query(String t)
		{
			int i;
			ArrayList z=new ArrayList();
			for(i=0;i<ls.size();i++)
			{
				student d=(student) ls.get(i);
				if(d.get_name().startsWith(t)==true)
					z.add(d);
			}
			return z;
		}
		public static void main(String[] args)
		{
			school p=new school();
			int i;
			Scanner sc=new Scanner(System.in);
			do
			{
				System.out.println("Enter 1 for add new Student");
				System.out.println("Enter 2 for find student data");
				System.out.println("Enter 3 for list Student data");
				System.out.println("Enter 4 for delete student");
				System.out.println("Enter 5 for name wise query");
				System.out.println("Enter 0 for exit");
				System.out.println("Ener your choice");
				i=sc.nextInt();
				switch(i)
				{
					case 1:
						p.addnew();
						break;
					case 2:
						System.out.println("Enter the roll:");
						int r=sc.nextInt();
						p.find(r);
					case 3:
						p.list();
						break;
					case 4:
						System.out.println("Enter the roll no:");
						int u=sc.nextInt();
						p.delete(u);
						break;
					case 5:
						System.out.println("enter first letter of name:");
						String b=sc.next();
						ArrayList v=p.name_wisw_query(b);
						for(i=0;i<v.size();i++)
						{
							student h=(student) v.get(i);
							h.disp();
							
						}
						break;
				}
				
			}while(i!=0);
		}
	}
