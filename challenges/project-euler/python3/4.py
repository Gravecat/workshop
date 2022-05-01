def is_palindrome(str):
    if len(str) < 2: return False
    start = str[:len(str)//2]
    end = str[len(str):len(str)//2 - 1:-1]
    if len(end) > len(start): end = end[:-1]
    return start == end

a, b, biggest = 999, 999, 0
while a >= 100 and b >= 100:
    test = a * b
    if (is_palindrome(str(test))):
        if test > biggest: biggest = test
    a -= 1
    if (a < 100):
        a = 999
        b -= 1

print(biggest)
