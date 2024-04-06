x=int(input("enter value for x: "))
y=int(input("enter value for y: "))

operation=input("choose math operation (+, -, *, /): ")

if operation == "+":
    print(x+y)
elif operation == "-":
    print(x-y)
elif operation == "*":
    print(x*y)
elif operation =="/":
    print(x/y)
else:
    print("you did not provide the correct math operation")