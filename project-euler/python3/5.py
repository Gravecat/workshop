def smallest_multiple(count):
    num = count
    while True:
        for i in range(1, count + 1):
            if (num % i != 0):
                num += count
                break
        else:
            return num

print(smallest_multiple(20))
