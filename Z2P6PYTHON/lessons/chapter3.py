# Arithmetic Operator
from tkinter import FALSE


num1=int(input('Enter first number: ')) # need to change int 'cos it is string
num2=int(input('Enter second number: '))
num3=num1+num2  # add
num4=num1-num2  # subtraction
num5=num1*num2  #multi
num6=num1/num2  # div
num7=num1%num2  # modulus
num8=num1//num2 # floor division
num9=num1**num2 # exponential
print(num3,num4,num5,num6,num7,num8,num9)

# Comparison Operator ==, !=, >=, <=, >, <
if num1==num2 :
    print('num1 is equal to num2')

if num1!=num2 :
    print('num1 is not equal to num2')

if num1>num2 :
    print('%s is greater than %s' %(num1,num2))
    # %s %s %(num1,num2)---output the result as string

if num1<num2 :
    print('%s is less than %s' %(num1,num2))

if num1>=num2 :
    print('%s is greater than or equal to %s' %(num1,num2))

if num1<=num2 :
    print('%s is less than or equal to %s' %(num1,num2))

# Assignment Operators =, +=, -+, *=, /=, %=, **=, //=
num10 = num1 + num2
num10 += num2
num10 -= num2
num10 *= num2
num10 /= num2
num10 %= num2
num10 **= num2
num10 //= num2
print('Num 10 is %s ' %(num10))


# left shift
a = 60
# 0011 1100
# (0)128 (0)64 (1)32 (1)16 (1)8 (1)4 (0)2 (0)1
#0+0+32+16+8+4 = 60
# a<<2 = 1111 0000 = 240
print(a<<2)
# Right Shift
print(a>>2) # 0000 1111 = 15

# Bitwise Operator => work in 8bits operation 
# a=> 0000 1001 => 9
# b=> 0000 1100 => 12
#a&b => 0000 1000 => 8
#a|b => 0000 1101 => 13
#a^b => 0000 0101 => 5
#~a => 1111 0110 => 6
#~b => 1111 0011 => 3
a = 9
b = 12
print(a&b) # AND gate
print(a|b) # OR gate
print(a^b) # XOR gate
print(~a)  # NOT gate => Formula (a + ~a) = -1 => ~a = -(1+a)
print(~b)  # NOT gate

#Logical Operators
if True and True: #like && operator
    print('ok')
print(True and True)
print(True and False)

print(True or False) # like || operator
print(False or False)

print(not(True)) # like ! operator

