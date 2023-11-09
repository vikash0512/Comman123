Python 3.8.9 (tags/v3.8.9:a743f81, Apr  6 2021, 14:02:34) [MSC v.1928 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def cattwice(twice,twice):
	cat(twice,twice)
	
SyntaxError: duplicate argument 'twice' in function definition
>>> def cattwice(twice)
SyntaxError: invalid syntax
>>> def cattwice(twice):
	print(twice,twice)

	
>>> cattwice(Ram)
Traceback (most recent call last):
  File "<pyshell#6>", line 1, in <module>
    cattwice(Ram)
NameError: name 'Ram' is not defined
>>> cattwice('Spam')
Spam Spam
>>> cattwice('Spam'*5)
SpamSpamSpamSpamSpam SpamSpamSpamSpamSpam
>>> def dogtwice(part1,part2):
	dog=part1+part2
	print(dog)

	
>>> dogtwice(cat)
Traceback (most recent call last):
  File "<pyshell#13>", line 1, in <module>
    dogtwice(cat)
NameError: name 'cat' is not defined
>>> dogtwice('cat')
Traceback (most recent call last):
  File "<pyshell#14>", line 1, in <module>
    dogtwice('cat')
TypeError: dogtwice() missing 1 required positional argument: 'part2'
>>> dogtwice('cat','dog')
catdog
>>> factorial(5)
Traceback (most recent call last):
  File "<pyshell#16>", line 1, in <module>
    factorial(5)
NameError: name 'factorial' is not defined
>>> import math
>>> factorial(4)
Traceback (most recent call last):
  File "<pyshell#18>", line 1, in <module>
    factorial(4)
NameError: name 'factorial' is not defined
>>> fact(5)
Traceback (most recent call last):
  File "<pyshell#19>", line 1, in <module>
    fact(5)
NameError: name 'fact' is not defined
>>> Fact(5)
Traceback (most recent call last):
  File "<pyshell#20>", line 1, in <module>
    Fact(5)
NameError: name 'Fact' is not defined
>>> def fact(n):
	fact(0)=1
	
SyntaxError: cannot assign to function call
>>> def fact(n):
	if n==0:
		return 1
	else:
		return n*fact(n-1)

	
>>> fact(5)
120
>>> def factorial(n):
	if n==0:
		return 1
	else:
		return n*fact(n-1)
num=int (input("Enter the no."))
SyntaxError: invalid syntax
>>> def factorial(n):
	if n==0:
		return 1
	else:
		return n*fact(n-1)
	num=int(input("enter the no."))
	if num<0:
		print("invalid input")
	else:
		print("Factorial is "),factorial(num))
		
SyntaxError: unmatched ')'
>>> def factorial(n):
	if n==0:
		return 1
	else:
		return n*fact(n-1)
	num=int(input("enter the no."))
	if num<0:
		print("invalid input")
	else:
		print("Factorial is ",factorial(num))

		
>>> 