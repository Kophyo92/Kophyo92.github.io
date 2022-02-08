'''
5! = 5 * 4!
   = 5 * 4 * 3!
   = 5 * 4 * 3 * 2!
   = 5 * 4 * 3 * 2 * 1!
f(n) => n = 1
        n*factorial(n-1)!
        n*(n-1)*(n-2)!
'''

# recursive formula
def factorial(n):
    if(n==1):
        print(n)
        return 1
    else:
        print(n,end='*')
        return n*factorial(n-1)

def main():
    print(factorial(10))

main()