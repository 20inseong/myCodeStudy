input_number = int(input())
value = list(map(int, input().split()))
check_number= int(input())
cnt = 0
for i in value:
    if i == check_number:
        cnt = cnt + 1
print(cnt)