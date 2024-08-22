import java.util.*;
class str
{
	public static void main(String[]args)
	{
		String s="india is great";
		System.out.println(s.length());
		s=s.trim();
		System.out.println(s.toLowerCase());
		System.out.println(s.toUpperCase());
		System.out.println(s.charAt(3));
		System.out.println(s.substring(2,7));
		System.out.println(s.substring(3));
		System.out.println(s.replaceAll("india","bharat"));
		System.out.println(s.startsWith("i"));
		System.out.println(s.endsWith("t"));
		
		String s1="is",s2="is";
		System.out.println(s1.equals(s2));
		System.out.println(s1.compareTo(s2));
		
		s1="age "+s1+String.valueOf(25);
		System.out.println(s1);
		System.out.println(s.indexOf("is"));
		System.out.println(s.lastIndexOf(" "));
		
		String[] y=s.split(" ");
		for(String a:y)
		{
			System.out.println(a);
		}
		for (int i=0;i<y.length;i++)
		{
			System.out.println(y[i]);
		}
		
		StringBuffer bf =new StringBuffer();
		bf.append("cpu");
		bf.append(5000);
		System.out.println(bf);
		System.out.println(bf.reverse());
		
		String q="aa ss.kk aa,ss dd,bb aa.uu ii bb";
		StringTokenizer st=new StringTokenizer(q,".//,");
		System.out.println(st.countTokens());
		while(st.hasMoreTokens()==true)	
		{
			String x=st.nextToken();
			System.out.println(x);
		}			
	}
}


    
    


    
    


    
    
