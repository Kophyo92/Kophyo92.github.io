class Account:
    def __init__(self,name,acc_no,initial_amount):
        self.name = name
        self._no = acc_no # _ means to inform othe programmer that the var should be protected, but it can be still accessed
        self._balance = initial_amount

    def deposit(self,amount):
        self.balance+= amount
    def withdraw(self,amount):
        self.balance -= amount
    def dump(self):
        s = "%s , %s has balance : %s" %(self.name,self.no,self.balance)
        print(s)

a1 = Account('Mg Mg','12345',300000)
a2 = Account('Aye Aye','12346',120000)
a1.dump()
a2.dump()
a1.deposit(500000)
a2.deposit(1000000)
a1.dump()
a2.dump()
a1.withdraw(400000)
a2.withdraw(600000)
a1.dump()
a2.dump()