num1 = int(input())
num2 = int(input())
a = int(num2/100);
c = num2%10
b = ((num2%100)-c)/10

print(num1*c);
print(int(num1*b));
print(num1*a);
print(num1*num2)