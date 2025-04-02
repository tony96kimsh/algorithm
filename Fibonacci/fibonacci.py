cycle = int(input("파보나치 연산 수 입력 : "))
arr = [0, 1]

for i in range(cycle - 1):
    arr.append(arr[i] + arr[i+1])
print(arr)