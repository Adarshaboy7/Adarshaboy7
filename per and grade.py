a=int(input("enter marks of 1st sub:"))
b=int(input("enter marks of 2nd sub:"))
c=int(input("enter marks of 3rd sub:"))
d=int(input("enter marks of 4th sub:"))
t=a+b+c+d
m=float(t/4)
print("per=",m)
if m>=80:
  g="A+"
elif m>=60:
  g="A"
elif m>=45:
  g="B"
elif m>=30:
  g="C"
else:
  g="F"
print("grade",g)
  
