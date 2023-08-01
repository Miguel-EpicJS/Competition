def custom_fibonacci(n, first_element, second_element):
    def fast_doubling(n):
        if n == 0:
            return (first_element, second_element)
        if n == 1:
            return (second_element, first_element + second_element)
        
        a, b = fast_doubling(n // 2)
        c = a * (b - a + second_element)
        d = a * a + b * b
        if n % 2 == 0:
            return (c, d)
        else:
            return (d, c + d)
    
    if n < 0:
        return None
    if n == 0:
        return first_element
    if n == 1:
        return second_element

    result, _ = fast_doubling(n - 1)
    return result

# Test the function with custom initial elements
first_element = 3
second_element = 5
n = 10
print(f"The {n}th Fibonacci number is: {custom_fibonacci(n, first_element, second_element)}")

