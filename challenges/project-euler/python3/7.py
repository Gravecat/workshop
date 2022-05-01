# is_prime() and next_prime() borrowed from 3.py

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

# Gets the nth prime number:
def nth_prime(num):
    current_prime = 1
    for i in range(0, num):
        current_prime = next_prime(current_prime)
    return current_prime

print(nth_prime(10001))
