my_dic = {}

data = int(input("Enter Number of Value:"))

for i in range(data):
    key = input("Enter the Key:")
    value = input("Enter the Value:")
    
    my_dic[key] = value

print(my_dic)