#4304263	 Aug 17, 2013 7:17:58 PM	fuwutu	 279A - The Point on the Spiral	 Python 3	Accepted	 124 ms	 0 KB
l = input().split(' ')
x, y = int(l[0]), int(l[1])
if y <= 0 and x >= 1 + y and x <= 1 - y:
    print((-y) * 4)
elif x > 0 and y >= 2 - x and y <= x:
    print(x * 4 - 3)
elif y > 0 and x >= -y and x <= y - 1:
    print(y * 4 - 2)
elif x < 0 and y >= x and y <= -1 - x:
    print((-x) * 4 - 1)
else:
    print(0)
