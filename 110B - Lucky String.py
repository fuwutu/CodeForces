#4314070  Aug 20, 2013 4:39:18 AM    fuwutu   110B - Lucky String     Python 3   Accepted     124 ms  0 KB
n = int(input())
s = "abcd" * (n // 4) + "abcd"[0 : n % 4]
print(s)
