def gst_cal():
    amount = float(input("Enter the amount:"))
    per = int(input("Enter the GST persentage:"))
    if (per>=0 and per<=100):
        new = amount*per/100
        total = amount + new
        print(f"Amount: ₹{amount}")
        print(f"GST{per}%: ₹{new:.2f} ")
        print(f"Total:{total:.2f}")
    else:
        print("Enter Valid Persentage")


gst_cal()
