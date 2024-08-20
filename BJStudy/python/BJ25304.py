total_price = int(input())
total_num = int(input())
check_price = 0
for number in range(total_num):
    price, num = input().split()
    check_price = check_price + int(price) * int(num)
if total_price == check_price:
    print("Yes")
else:
    print("No")