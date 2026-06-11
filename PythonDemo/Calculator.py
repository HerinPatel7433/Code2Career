class Calculator:
    def __init__(self):
        a = float(input("Enter value of a:"))
        b = float(input("Enter value of b:"))
        operator = input("which operation you want to perform + , - , * and /:")

        match operator:
            case "+":
                self.add(a, b)
            case "-":
                self.sub(a, b)
            case "*":
                self.mul(a, b)
            case "/":
                self.div(a, b)
            case _:
                print("Enter Valid Operator")

    def add(self, a, b):
        print(f"Add of a and b is {a + b}")

    def sub(self, a, b):
        print(f"Sub of a and b is {a - b}")

    def mul(self, a, b):
        print(f"Mul of a and b is {a * b}")

    def div(self, a, b):
        print(f"Div of a and b is {a / b}")

cal = Calculator()