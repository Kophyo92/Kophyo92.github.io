print('Hello World')
# Single line comment
'''
Multi
Line
Comment
'''
name='Eric'
age=30
city='Yangon'
my_statement="He lives in Yangon"
about_me="""
    This is about me.
    How are you?
"""
print(name,age,city)
print(my_statement,about_me)

if(age>20):
    print('age is over 20')
else:
    print('age is less than 20')


#with [] {} ()
fruits=['Banana','Mango',
'Orange','Papaya']
print(fruits)

# \ is to enter next line
myInfo=name +\
city +\
my_statement +\
about_me
print(myInfo)    
