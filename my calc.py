a=float(input("give the fist number: "))
b=float(input("give the second number: "))
symbol=(input("give the symbol: "))
if symbol=="+":
    print(a+b)
elif symbol=="-":
    print(a-b)
elif symbol=="*":
    print(a*b)
elif symbol=="/" and a!=0 and b!=0:     #checks for zeros
    print(a/b)
else:
    print("wrong inputs")
