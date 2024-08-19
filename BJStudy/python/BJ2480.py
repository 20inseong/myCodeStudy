num1, num2, num3 = input().split()
max_num = max(num1, num2, num3)
if int(max_num) > 6:
    print("This number is too big.")
    exit()
    
B12 = bool(num1 == num2)
B13 = bool(num1 == num3)
B23 = bool(num2 == num3)
B123 = bool(num1 == num2 == num3)

if B123:
    price3 = 10000 + int(num1) * 1000
    print(price3)
elif B12:
    price2 = 1000 + int(num1) * 100
    print(price2)
elif B13:
    price2 = 1000 + int(num1) * 100
    print(price2)
elif B23:
    price2 = 1000 + int(num2) * 100
    print(price2)
else:
    price1 = int(max_num) * 100
    print(price1)