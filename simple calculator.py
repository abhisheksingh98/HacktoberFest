#this program makes a simple calculator which can aad,subtract,multiply,divide using functions
#this function adds two number
def add(a,b):
    return a+b
#this function subtracts two numbers
def subtract(a,b):
    return a-b
#this function multiplies  two numbers
def multiply(a,b):
    return a*b
#this function divides two numbers
def divide(a,b):
    return a/b
print("select operation.")
print("1.add")
print("2.subtract")
print("3.multiply")
print("4.divide")
#take input from the user
choice=input("enter choice(1/2/3/4):")
num1=int(input("enter first number:"))
num2=int(input("enter second number:"))

if choice =='1':
    print(num1,"+",num2,"=",add(num1,num2))
elif choice=='2':
     print(num1,"-",num2,"=",subtract(num1,num2))
elif choice=='3':
     print(num1,"*",num2,"=",multiply(num1,num2))
elif choice == '4':
     print(num1,"/",num2,"=",divide(num1,num2))
else:
    print("invalid input")
    
