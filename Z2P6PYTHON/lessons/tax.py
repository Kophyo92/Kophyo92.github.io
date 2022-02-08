# calculate tax based on food and beverage
def calculate_tax(food,ber,tax,service):
    fandbtotal = food + ber
    servicetotal = fandbtotal*service*0.01
    taxtotal = fandbtotal*tax*0.01
    grandtotal= fandbtotal + servicetotal + taxtotal
    return [fandbtotal,servicetotal,taxtotal,grandtotal]

def main():
    tax = calculate_tax(25000,5600,5,10)
    print(tax)

main()