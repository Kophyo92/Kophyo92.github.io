# while loop
from itertools import count

# while else statement
count=0
while count<9 :
    print('Count value is ',count)
    count = count + 1
else:
    print(count,'Count is greater than or equal to 9 ')
print('Bye!')

ans='y'
while ans=='y' :
    number=int(input('Enter a number to check Even or Odd: '))
    if number%2:
        print(number,' is Odd')
    else:
        print(number,' is Even')
    ans=input('Wanna try again? y/n : ') 