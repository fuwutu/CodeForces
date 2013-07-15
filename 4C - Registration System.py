#4076779   Jul 15, 2013 8:58:49 PM	fuwutu	 4C - Registration System	 Python 3	Accepted	 1828 ms	 600 KB
n = int(input())
d = {}
for i in range(0, n):
    s = input()
    if s in d:
        print(s+str(d[s]))
        d[s] += 1
    else:
        print("OK")
        d[s] = 1
