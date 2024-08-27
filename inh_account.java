import java.util.*;
class account
{
	private String ahname;
	private String acho;
	protected int balance;
	public account()
	{
		ahname="";
		acho="";
		balance=0;
	}
	public account(String q,String p,int r)
	{
		acho=q;
		ahname=p;
		balance=r;
	}
	public void account_read()
	{
		Scanner su=new Scanner(System.in);
		System.out.println("Enter Account no:");
		acho=su.next();
		System.out.println("Enter Account holder Name:");
		ahname=su.next();
		System.out.println("Enter Balance:");
		balance=su.nextInt();
	}
	public void account_info()
	{
		System.out.println("A/c No:"+acho+"A/c Name:"+ahname+"A/c Balance:"+balance);
	}
}
class savings extends account
{
	private int amount;
	public savings()
	{
		super();
	}
	public savings(String r,String nm,int b)
	{
		super (r,nm,b);
	}
	public void savings_read()
	{
		Scanner sb=new Scanner (System.in);
		System.out.println("Enter Amount:");
		amount=sb.nextInt();
	}
	public void withdraw()
	{
		savings_read();
		if (balance-amount<1000)
		{
			System.out.println("unsufficient balance");
		}
		else
		{
			balance=balance-amount;
			System.out.println("Balance:"+balance);
		}
		
	}
	public void deposit()
	{
		savings_read();
		if (amount<100)
		{
			System.out.println("not possible");
		}
		else
		{
			balance=balance+amount;
			System.out.println("Balance:"+balance);
		}
	}
	public static void main(String[]args)
	{
		savings s1=new savings();
		s1.account_read();
		s1.account_info();
		s1.deposit();
		s1.withdraw();
		savings s2=new savings("1001","ram",10000);
		s2.account_info();
		s2.deposit();
		s2.withdraw();
	}
}
