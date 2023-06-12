import math
a=float(input("enter side 1="))
b=float(input("enter side 2="))
c=float(input("enter side 3="))
if a+b+c and b+c>a and c+a>b:
  s=(a+b+c)/2
  x=math.sqrt(s*(s-a)*(s-b)*(s-c))
  print("n area=",x)
else:
  print("not possible")
