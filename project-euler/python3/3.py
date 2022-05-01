# Trying to do it properly this time.

# Check if a number is prime or not.
def is_prime(num):
    for i in range(2, (num // 2) + 1):
        if (num % i == 0): return False
    return True

# Get the next prime number, after a given number.
def next_prime(num):
    while True:
        num += 1
        if is_prime(num): return num

# Find the largest prime factor of a number.
def largest_prime_factor(num):
    next = 2
    while True:
        if is_prime(num): return num
        if num % next == 0: num //= next
        next = next_prime(next)

# What is the largest prime factor of the number 600851475143 ?
print(largest_prime_factor(600851475143))
