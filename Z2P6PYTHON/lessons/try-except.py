# try, except clauses to validate
# to avoid runtime error when user types other datatypes except float, use try: except: clauses
temp = input('Enter F degree: ')

try:
    temp = float(temp)
    cel = (temp - 32) * 5.0/9.0
    print(cel)
except:
    print('Error!')
