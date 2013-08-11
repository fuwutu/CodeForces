#4266668   Aug 11, 2013 7:39:45 PM	fuwutu	 47A - Triangular numbers	 Python 3	Accepted	124 ms	0 KB
n = int(input())
triangular = 1
i = 1
while triangular < n:
    i += 1
    triangular += i
if triangular == n:
    print("YES")
else:
    print("NO")
