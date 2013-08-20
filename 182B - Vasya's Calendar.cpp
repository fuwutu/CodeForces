#4314540	 Aug 20, 2013 9:13:16 AM	fuwutu	 182B - Vasya's Calendar	 Python 3	Accepted	 124 ms	 0 KB
d = int(input())
n = int(input())
l = input().split(' ')
times = 0
for i in range(0, n-1):
    times += d - int(l[i])
print(times)
