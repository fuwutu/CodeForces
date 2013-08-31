#4387236	 Aug 31, 2013 3:00:19 PM	fuwutu	 340A - The Wall	 Python 3	Accepted	 124 ms	 0 KB
def GCD(a, b):
    while a % b != 0:
        a, b = b, a % b
    return b

def LCM(a, b):
    return a * b // GCD(a, b)

l = input().split(' ')
x, y, a, b = int(l[0]), int(l[1]), int(l[2]), int(l[3])
lcm = LCM(x, y)
print(b // lcm - (a - 1) // lcm)
