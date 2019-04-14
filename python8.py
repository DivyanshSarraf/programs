check = 0
number = int(input("Enter any number : "))
if number == 1:
    print(number, "is neither a prime nor composite")
    exit()
for i in range(2, int((number/2)+1)):

    if number%i == 0:
        check = 1
        print(number, "is not a prime number")
        break
if check == 0:
    print(number, "is a prime number ")
