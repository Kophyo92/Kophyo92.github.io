temp={'Osolo':13,'London':14.3}
temp['paris'] = 15
temp['Yangon'] = 35
temp['Mandalay'] = 37
print(temp)
print(sorted(temp)) # sorting a to z but won't show value

if 'Tokyo' in temp:
    del temp['Tokyo'] # deleting 
else:
    print('Tokyo is not in dict')

print(temp['London'])
print(temp.keys())
print(temp.values())

for key in temp:
    print(key)
for key in temp:
    print(key,'=>',temp[key]) 
for key in sorted(temp): # sorting a to z
    print(key,'=>',temp[key]) 

t1 = temp # pass by reference => memory address share
print(t1,temp)
t1['Yangon'] = 12
print(t1,temp)

t2 = temp.copy() # pass by value
t2['Mandalay'] = 15
print(t2,temp)

temp2 = dict()
print(type(temp))
print(type(temp2))