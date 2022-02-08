import sys
try:
    C = float(sys.argv[1])

except IndexError:
    print(' Please append C value after file name!')
    sys.exit(1)
except NameError:
    print(sys.argv[1],' is not valid input. Please enter float or number')
    sys.exit(1)
except ValueError:
    print(sys.argv[1],' is not valid input. Please enter float or number')
    sys.exit(1)

F = 9.0*C/5 + 32    
print('F is : ',F)