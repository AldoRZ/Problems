t = int(input())
def geek_onacci(a, b, c, n):
	if n==4:
		return a + b + c
	elif n == 3:
		return c
	elif n == 2:
		return b
	else:
		return geek_onacci(a, b, c, n-1) + geek_onacci(a, b, c, n-2) + geek_onacci(a, b, c, n-3)

while t:
	t -=1
	A, B, C, N = map(int, input().strip().split())
	print(geek_onacci(A, B, C, N))
