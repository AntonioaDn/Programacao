n = int(input(""))
array = list(map(int, input("").split()))
num_errados = 0
for i in range(n):
    if i%2 != array[i]%2:
        num_errados += 1

if num_errados%2 == 1:
    print("-1")
else:
    print(f'{int(num_errados/2)}')
