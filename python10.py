number = int(input("Enter any number : "))
s = 1
for i in range(1, number+1):
    s = s * i
print("Factorial of", number, "is", s)
