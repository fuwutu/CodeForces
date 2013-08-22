#4324702	 Aug 22, 2013 7:41:39 PM	fuwutu	 195A - Let's Watch Football	 Python 3	Accepted	124 ms	0 KB
l = input().split(' ')
a, b, c = int(l[0]), int(l[1]), int(l[2])
d = ((a - b) * c + b - 1) // b
print(d)
