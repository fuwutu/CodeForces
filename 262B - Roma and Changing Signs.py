#4286327	 Aug 16, 2013 3:35:51 PM	fuwutu	 262B - Roma and Changing Signs	 Python 3	Accepted	280 ms	5500 KB
l = input().split(' ')
n, k = int(l[0]), int(l[1])
l = input().split(' ')
answer = 0
m = 10000
for i in range(0, n):
    a = int(l[i])
    if (a >= 0):
        answer += a
        if a < m:
            m = a
    else:
        if k > 0:
            answer -= a
            k -= 1
        else:
            answer += a
        if -a < m:
            m = -a
if k % 2 == 1:
    answer -= m * 2
print(answer)
