n=int(input("enter no="))
x=float(input("enter no="))
s=0
for i in range(1,n+1):
  s=s+x**i/i
  print((x**i/i))
print("sum=",s)
