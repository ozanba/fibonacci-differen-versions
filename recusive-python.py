def fibonacci(n):
    if n == 1 or n == 2:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

limit = int(input("How many fibonacci numbers you want to get: "))

for i in range(1, limit + 1):
    print(fibonacci(i))
