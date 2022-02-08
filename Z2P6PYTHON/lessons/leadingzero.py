# Leading zeroes
# print(end="") means not to enter next line
num=int(input('Enter a number 0...9999 : '))
if num<0:
    num=0
if num>9999:
    num=9999

print(end='[')

digit=num//1000 # thousand digit
print(digit,end='')
num%=1000

digit=num//100 # hundred digit
print(digit,end='')
num%=100

digit=num//10 # ten digit
print(digit,end='')
num%=10

print(num,end='')
print(']')