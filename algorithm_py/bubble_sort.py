arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

for i in range(len(arr)):
    for j in range(len(arr)):
        if j+1 < len(arr) and arr[j] > arr[j+1]:
            (arr[j], arr[j+1]) = (arr[j+1], arr[j])

print(arr)
