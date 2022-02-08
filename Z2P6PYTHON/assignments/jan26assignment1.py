print('Please Enter Five Integers!')

num1=int(input('Enter First Number: '))
num2=int(input('Enter Second Number: '))
num3=int(input('Enter Third Number: '))
num4=int(input('Enter Fourth Number: '))
num5=int(input('Enter Fifth Number: '))
max=num1
if num2>max:
    max=num2
if num3>max:
    max=num3
if num4>max:
    max=num4
if num5>max:
    max=num5
print('Maximum Number is ',max)

min=num1
if num2<min:
    min=num2
if num3<min:
    min=num3
if num4<min:
    min=num4
if num5<min:
    min=num5
print('Minimum Number is ',min)
