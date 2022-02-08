# temp.dat to dictionary
file = open('temps.dat','r')
temps = {}

for line in file.readlines():
    # print(line)
    words = line.split()
    c,t = words # splitting key in c and value in t
    # print(c,t)
    temps[c[:-1]] = t # c zero from before last one 
    
print(temps)
file.close()
