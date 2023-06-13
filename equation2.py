n=int(input("enter n="))
x=float(input("enter x="))
s=0
t=x
for i in range(2,n+1):
  s=s+t
  print(t)
  t=t*x/1
print("sum=",s)
  
