import java.util.*; 
class emp
{
	private String empid,ename;
	private double basic,da,gross,tax,net;
	public emp()
	{
		empid="";
		ename="";
		basic=0;
	}
	public emp(String s1,String s2,double b)
	{
		empid=s1;
		ename=s2;
		basic=b;
	}
	public void read()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter empid:");
		empid=sc.next();
		System.out.println("Enter name:");
		ename=sc.next();
		System.out.println("Enter basic:");
		basic=sc.nextDouble();
	}
	public void disp()
	{
		if(basic<=10000)
			da=basic*.40;
		else
			da=basic*.50;
		gross=basic+da;
		if(gross>20000)
			tax=basic*.02;
		else
			tax=0;
		net=gross-tax;
		System.out.println("Empid : "+empid+" Name: "+ename);
		System.out.println(" Basic : "+basic);
		System.out.println(" da: "+da);
		System.out.println(" Gross: "+gross);
		System.out.println(" tax: "+tax);
		System.out.println(" Net: "+net);
		
	}
	public static void main(String[] args)
	{
		emp e1=new emp();
		e1.read();
		e1.disp();
		emp e2=new emp("1001","mr.x",15000);
		e2.disp();
		
	}
}
