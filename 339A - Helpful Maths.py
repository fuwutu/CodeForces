#4362738	 Aug 28, 2013 6:54:41 PM	fuwutu	 339A - Helpful Maths	 Python 3	Accepted	 92 ms	 0 KB
s = input()
n1 = n2 = n3 = 0
for i in range(0, len(s), 2):
    if s[i] == '1':
        n1 += 1
    elif s[i] == '2':
        n2 += 1
    else:
        n3 += 1
ss = "1+" * n1 + "2+" * n2 + "3+" * n3
print(ss[:-1])
