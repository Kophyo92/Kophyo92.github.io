#Division
print('Enter two number to divide')
divident=int(input('Enter divident: '))
divisor=int(input('Enter divisor: '))
result = divident/divisor
print(divident,'/',divisor,'=',result)

# Half
value = int(input('Enter a number to split: '))
result=value/2
print('Half of ',value, 'is', result)

# Temperatur conversion
# C = 5/9 * (F-32)
degreesF=float(input('Enter F Degrees: '))
degreesC=5/9 * (degreesF - 32)
print(degreesF, 'degrees F = ', degreesC, 'degrees C')

#Time Conversion
seconds = int(input('Please enter seconds: '))
hour = seconds//3600
seconds = seconds%3600
minutes = seconds//60
seconds = seconds%60
print(hour, 'hours : ', minutes, 'minutes : ', seconds, ' seconds')