cases = int(input())

for c in range(0, cases):
    courses = input().split()
    print(int(courses[0]) * int(courses[1]) * int(courses[2]))
