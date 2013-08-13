#4271120	 Aug 13, 2013 5:01:37 AM	fuwutu	 23A - Youre Given a String...	 Python 3	Accepted	 342 ms	 0 KB
s = input()
n = len(s)
m = n - 1;
while m > 0:
    find = False
    for i in range(0, n - m):
        for j in range(i + 1, n - m + 1):
            match = True
            for k in range(0, m):
                if s[i+k] != s[j+k]:
                    match = False
                    break
            if match:
                find = True
                break
        if find:
            break
    if find:
        break
    m -= 1
print(m)
