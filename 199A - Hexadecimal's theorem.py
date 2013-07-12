#4055616   Jul 12, 2013 7:40:42 PM	fuwutu	 199A - Hexadecimal's theorem	 Python 3	Accepted	78 ms	100 KB
n = int(input())
if n == 0:
    print(0, 0, 0)
else:
    a, b = 0, 1
    while a + b != n:
        a, b = b, a + b
    print(0, a, b)
