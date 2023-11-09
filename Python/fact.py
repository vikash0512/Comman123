def factorial(n):
	if n==0:
		return 1
	else:
		return n*fact(n-1)
	num=int(input("enter the no."))
	if num<0:
		print("invalid input")
	else:
		print("Factorial is ",factorial(num))
