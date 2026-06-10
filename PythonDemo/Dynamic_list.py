my_list = []
my_value = int(input("Enter number of values: "))

for i in range(my_value):
    value = int(input(f"Enter value at index {i + 1}: "))
    my_list.append(value)

print("Initial list:", my_list)

my_list.append(27)
print(my_list)

my_list.extend([100, 200])
print(my_list)

my_list.insert(2, 4)
print(my_list)

print(my_list.count(4))

my_list.pop()
print(my_list)

copied_list = my_list.copy()
print(copied_list)

my_list.sort()
print(my_list)

my_list.reverse()
print(my_list)

my_list.clear()
print(my_list)

