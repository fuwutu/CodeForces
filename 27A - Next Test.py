#4271177	 Aug 13, 2013 5:19:28 AM	fuwutu	 27A - Next Test	 Python 3	Accepted	 124 ms	 100 KB
n = int(input())
s = set()
while n != 0:
    for x in input().split(' '):
        s.add(int(x))
        n -= 1
for i in range(1, 3002):
    if not i in s:
        print(i)
        break
