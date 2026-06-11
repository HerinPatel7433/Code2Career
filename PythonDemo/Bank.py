class Bank():

    def __init__(self,amount):
        self.amount = amount

    def getBalance(self):
        print(f"Current Balance is {self.amount}")

    def Deposite(self,amount):
        self.amount += amount
        self.getBalance()

    def Withdraw(self,amount):
        self.amount -= amount
        self.getBalance()

Yash = Bank(50000)
Yash.getBalance()
Yash.Deposite(50000)
Yash.Withdraw(100000)