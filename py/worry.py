k, x = map(int, input().split())
max_note = k // x
rem = k % x
total = max_note + rem
print(total)
