# get size of table to print numbers
size = int(input('Please Enter Size of Table: '))
# first row with numbers
print('      ',end='')
for i in range(1,size+1):
    print('{0:4}'.format(i),end='')
print()
# second row with + and ----
print('    +',end='')
for i in range(1,size+1):
    print('----',end='')
print()
# print table
for i in range(1,size+1):
    # print row number
    print('{0:3} | '.format(i),end='')
    for j in range(1,size+1):
        product = i * j
        print('{0:4}'.format(product) , end='')# end='  ' is to display continuously
    print() # to enter next line
