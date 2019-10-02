g = input()
h = input()
p = input()
if len(p) != len(g + h):
    print('NO')
else:
    if sorted(p) == sorted(g + h):
        print('YES')
    else:
        print('NO')