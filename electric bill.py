u=int(input("unit="))
if u<=50:
  p=u*2.50
elif u<=100:
  p=50*2.50+(u-50)*3.50
elif u<=200:
  p=50*2.50+50*3.50+(u-100)*5
else:
  p=50*2.50+50*3.50+100*5+(u-200)*7
print("pay=",p)
  

            
