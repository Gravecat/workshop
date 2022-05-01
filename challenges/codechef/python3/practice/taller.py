cases = int(input())
for c in range(0, cases):
    heights = input().split()
    if heights[0] > heights[1]: print('A')
    if heights[1] > heights[0]: print('B')
