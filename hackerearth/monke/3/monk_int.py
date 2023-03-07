def max_subarray_within_limit(arr, limit):
    left = 0
    right = 0
    max_sum = 0
    current_sum = arr[0]
    start = 0
    end = 0

    while right < len(arr):
        if current_sum + arr[right] <= limit:
            current_sum += arr[right]
            if current_sum > max_sum:
                max_sum = current_sum
                end = right
                start = left
            right += 1
        else:
            current_sum -= arr[left]
            left += 1

    return len(arr[start:end+1])

print (max_subarray_within_limit([1,2,3,4], 8))
