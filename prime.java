import java.util.*;
public class Prime
{
public static void main(String[] args)
{
int ct=0,n=0,i=1,j=1;
Scanner sc= new Scanner(System.in);
//System.in is a standard input stream
System.out.print("Enter how many prime numbers - ");
int m= sc.nextInt();
while(n<m)
{
j=1;
ct=0;
while(j<=i)
{
if(i%j==0)
ct++;
j++;
}
if(ct==2)
{
System.out.printf("%d ",i);
n++;
}
i++;
}
}
}
