
p=int(input("enter the marks of python"))
c=int(input("enter the marks of c++"))
m=int(input("enter the marks of maths"))
e=int(input("enter the marks of english"))
h=int(input("enter the marks of hindi"))
t=p+c+m+e+h
print(t)
per=(t/500)*100
print(per)
if(per>70):
    print("Ist division")
elif(per>40):
    print("IInd division")
else:
    print("IIIrd division")
