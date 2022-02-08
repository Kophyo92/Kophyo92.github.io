from tkinter import E


height = int (input('Enter tree height: '))
row = 1
while row <= height:
    
    count = 0
    while count < height-row:
        print(end=' ')
        count += 1
    
    count = 0
    while count < row:
        print(end='*')
        count += 1
    print()
    row += 1

row = height-1
while row >= 0:
    count = 0
    while count < height-row:
        print(end=' ')
        count += 1
    
    count = 0
    while count < row:
        print(end='*')
        count += 1
    print()
    row -= 1
    

