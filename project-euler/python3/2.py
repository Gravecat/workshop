a, b, sum = 1, 2, 0
while a < 4000000:
    if (b % 2 == 0): sum += b
    a, b = b, a + b
print(sum)
