import math
a=float(input("a="))
b=float(input("b="))
c=float(input("c="))
d=b**2-4*c*a
if d>0:
  x1=(-b+math.sqrt(d)/(2*a))
  x2=(-b-math.sqrt(d)/(2*a))
  print("root s are",x1,x2)
else:
  print("root are imaginary")
  
