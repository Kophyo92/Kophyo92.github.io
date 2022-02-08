# testing function for client

def double(x):
    return 2*x
def test_double():
    x = 4   
    expected = 8 # client expected
    computed = double(x) # computed by program
    success = computed == expected
    msg = 'Computed %s, Expected %s' %(computed,expected)
    assert success,msg

def main():
    test_double()

main()