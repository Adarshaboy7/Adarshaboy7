n=int(input("enter n="))
x=float(input("enter x="))
s=0
t=x
for i in range(1,n+1):
  s=s+t
  print(t)
  t=t*(x**2)/((2*i)*(2*i*1)*(-1))
print("sum=",s)
 
