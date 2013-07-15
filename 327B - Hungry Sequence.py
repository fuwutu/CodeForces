#4076363   Jul 15, 2013 7:24:55 PM	fuwutu	 327B - Hungry Sequence	 Python 3	Accepted	 312 ms	 100 KB
import sys
n = int(input())
sys.stdout.write(str(n))
for i in range(n+1, n*2):
    sys.stdout.write(" " + str(i))
