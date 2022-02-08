# read rain.txt file and list dwon the month and value
infile = open('rain.txt','r')
months = []
values = []
for line in infile:
    words = line.split()
    if(words[0] != 'Year'):
        months.append(words[0])
        values.append(float(words[1]))
print(months)
print(values)

infile.close()