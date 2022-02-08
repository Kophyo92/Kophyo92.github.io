# prime => starts from 2
# can divide by only itself
# search 10 to 19

'''
for i in range(1,15,2): # range(start,end,step)
    print(i)
'''

for num in range(10,20): # 10 to 19
    for i in range(2,num):
        if num%i == 0:
            j=num/i
            print('%d is %d * %d ' %(num,j,i))
            break
    else:
        print(num, ' is Prime! ')

# calculate prime using while loop
i=2
while i<100 :
    j=2
    while j <= i/j:
          if not(i%j): break
          j = j + 1
    if j > i/j : print(i, 'is prime')
    i = i + 1