def multiple():
    operation = "Sum"
    result = 5 + 10
    return operation,result

operation,result = multiple()
print(operation,result)

# List
def multiple():
    operation = "Sum"
    result = 5 + 10
    return [operation,result]

result_list = multiple()
print(result_list)
print(result_list[0])
print(result_list[1])

# Dictionary
def multiple():
    myDict = dict()
    operation = "Sum"
    result = 5 + 10
    myDict['operation'] = operation
    myDict['result'] = result
    return myDict

result_dict = multiple()
print(result_dict)
