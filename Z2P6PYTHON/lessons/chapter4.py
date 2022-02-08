#If Statement False,0,None => False
var1=0
if var1:
    print('var1 has value')
    print(var1)
print('End')

# If else
var2=int(input('Enter a number: '))
if var2%2:
    print(var2, ' is Odd')
else:
    print(var2, ' is Even')
print('Bye')

# Nested if
# in python else if syntax => elif
var3=100
if var3<200:
    print(var3, ' is less than 200') 
    if var3 == 150:
        print('which is 150')
    elif var3 == 100:
        print('which is 100')
    elif var3 == 50:
        print('which is 50')
    elif var3<50:
        print(var3,' is less than 50')
else:
    print(var3,' is greater than or equal 200')
print('Bye')

# Check divisor not to be zero
divident = int(input('Enter divident: '))
divisor = int(input('Enter divisor: '))
if divisor != 0:
    quotient = divident/divisor
    print(divident,'/',divisor,'=',quotient)
print('End')


