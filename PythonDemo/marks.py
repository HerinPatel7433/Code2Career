sub_1 = int(input("Enter the Marks of Subject_1:"))
sub_2 = int(input("Enter the Marks of Subject_2:"))
sub_3 = int(input("Enter the Marks of Subject_3:"))
sub_4 = int(input("Enter the Marks of Subject_4:"))
sub_5 = int(input("Enter the Marks of Subject_5:"))

sum = sub_1 + sub_2 + sub_3 + sub_4 + sub_5 
total = 500
grade = sum*100/total 

if (grade > 90 and grade <= 100):
    print("Grade: A+")
elif (grade > 80 and grade <= 90):
    print("Grade: A")
elif (grade > 70 and grade <= 80):
    print("Grade: B")
elif (grade > 60 and grade <= 70):
    print("Grade: C")
elif (grade > 50 and grade <= 60):
    print("Grade: D")
elif(grade >= 0 and grade <= 50):
    print("Grade:F")
else:
    print("Enter Valid Marks.")
