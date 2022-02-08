height = int (input('Enter tree height: '))
i = 0
while i < height:
    j = 0
    while j <= i:
        print('*',end=' ')
        j += 1
    print()
    i += 1

i = 0
while i < height:
    j = height - 1
    while j > i:
        print('*',end=' ')
        j -= 1
    print()
    i += 1

    
    
