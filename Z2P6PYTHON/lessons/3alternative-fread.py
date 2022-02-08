# 1 readlines to list
infile = open('data.txt','r')
'''
list = infile.readlines()
print(list)

# 2nd method
infile.readline()# can skip
infile.readline()# can skip
infile.readline()# can skip

print(infile.readline())
infile.close
'''
# 3rd method
text = infile.read()
myList = text.split()
print(myList)
print(text)
infile.close()