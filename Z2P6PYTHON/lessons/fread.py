# read file
infile = open('data.txt','r') # r for readonly
sum = count = 0
for line in infile:
    count += 1
    sum += int(line)
    print(line)
mean = sum/count

print('Sum is :',sum)
print('Count is :',count)
print('Mean is :',mean)

infile.close()