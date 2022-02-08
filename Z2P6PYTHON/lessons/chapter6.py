# Functions
'''
import sys
sum = 0
while True:
    val = int(input('Enter number (999 to exit) : '))
    if val == 999:
        sys.exit(0)
    sum += val
    print('Sum is : ', sum)
'''

# Testing build-in function
myList = [2,4,6,8,9]
print(myList)
print(myList.index(2)) # index of val 2 => index 0
myList.append(12)
print(myList)
myList.insert(3,5) # (index,val)
print(myList)
print(type(myList))

# Function syntax
# def functionName():
def sayHi():
    print('Hi')
sayHi() # fun calling

def sayHi(message):
    print('Hi',message)
sayHi('KP')

def sayHi(message = 'KP'): # default argument
    print('Hi',message)
sayHi()

# return type function
def F(C):
    return (9.0/5)*C + 32
fDegree = F(45)
print(fDegree)

# y(t) = v0t + 1/2gt2
def y(t,v0):
    g = 9.81
    return v0*t + 0.5*g*t**2
y1 = y(12,35)
y2 = y(2,v0=6)
y3 = y(t=3,v0=5)
print(y1,y2,y3)

