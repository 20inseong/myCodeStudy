bytes_number = int(input())
if 4 <= bytes_number <= 1000:
    long_print = bytes_number / 4
    for i in range(int(long_print)):
        print("long", end=" ")
    print("int")
else:
    print("Please check the range of the number")