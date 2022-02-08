def double(x):
    return 2*x
def test_double():
    tol = 1E-14 # tolerance rate for permitted clearance
    x_values = [3,7,-2,0,4.5]
    expected_values = [6,14,-4,0,9]
    for x,expected in zip(x_values,expected_values): # zip for looping two var in the same time
        computed = double(x)
        msg = "%s !s %s"%(computed,expected)
        assert abs(expected - computed) < tol,msg # abs = absolute
def main():
    test_double()
main()