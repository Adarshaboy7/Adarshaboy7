import java.util.*;
class time 
{
	public static int count=0;
	private int hour,min,sec,day;
	public time()
	{
		hour=0;
		min=0;
		sec=0;
		day=0;
		count++;
		System.out.println("obj=>"+count);
	}
	public time(int p,int q,int r)
	{
		hour=p;
		min=q;
		sec=r;
		day=0;
		count++;
		System.out.println("obj=>"+count);
			
	}
	public void read()
	{
		while(true)
		{
		Scanner z=new Scanner(System.in);
		System.out.println("hour:");
		hour=z.nextInt();
		System.out.println("min:");
		min=z.nextInt();
		System.out.println("sec:");
		sec=z.nextInt();
		if((hour>=0&&hour<24)&&(min>=0&&min<60)&&(sec>0&&sec<60))
			break;
		else
			System.out.println("invalid input");
				
			
		}
	}
	public void disp()
	{
		if(day>0)
			System.out.println("day="+day);
		System.out.println(hour+":"+min+":"+sec);
	}
	public static time add(time t1,time t2)
	{
		time t3=new time();
		t3.hour=t1.hour+t2.hour;
		t3.min=t1.min+t2.min;
		t3.sec=t1.sec+t2.sec;
		if(t3.sec>=60)
		{
			t3.sec=t3.sec-60;
			t3.min++;
		}
		if(t3.min>=60)
		{
			t3.min=t3.min-60;
			t3.hour++;
		}
		if(t3.hour>=24)
		{
			t3.hour=t3.hour-24;
			t3.day++;
		}
		return t3;
	}
	public static void main(String[]args)
	{
		time x=new time();
		x.read();
		time y=new time();
		y.read();
		time z=time.add(x,y);
		x.disp();
		y.disp();
		z.disp();
	}
}
