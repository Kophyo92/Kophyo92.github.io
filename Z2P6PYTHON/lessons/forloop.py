#for loop with in 
for letter in 'Python':
    print('Current Letter', letter)

fruits=['banana','mango','orange']
for fruit in fruits:
    print('I like ', fruit)

print(fruits[0])
print(fruits[1])
print(len(fruits))
for i in range(len(fruits)):# range 0 to 2
    print('I like ', fruits[i])

myList=[2,4,6,8,9]
for i in range(len(myList)):
    myList[i]=myList[i]**2
print(myList)
