from asyncio.windows_events import NULL
from logging import NullHandler

print('Enter any twenty floating-point values or negative values will be terminated')
i = 0
sum = 0
count = 0
u_inp = []
while i < 20:
    inp = float(input('Enter number : '))
    u_inp.append(inp)
    if u_inp[i] < 0:
        print('-----Program Terminated!-----')
        break
    else:
        sum += u_inp[i]
        count += 1
        avg = sum/count
        max = u_inp[0]
        min = u_inp[0]
        if u_inp[i] > max:
            max = u_inp[i]
        if u_inp[i] < min:
            min = u_inp[i]
    i += 1
  
        
print('Sum: ',sum)
print('Avereage: ',avg)
print('Mamimum Value: ',max)
print('Minimum Value: ',min)
