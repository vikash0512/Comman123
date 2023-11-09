Python 3.8.9 (tags/v3.8.9:a743f81, Apr  6 2021, 14:02:34) [MSC v.1928 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> id(3)
140726182549232
>>> id(5)
140726182549296
>>> x=3
>>> id(x)
140726182549232
>>> int("32")
32
>>> int("hello")
Traceback (most recent call last):
  File "<pyshell#5>", line 1, in <module>
    int("hello")
ValueError: invalid literal for int() with base 10: 'hello'
>>> str(32)
'32'
>>> int(324.32)
324
>>> int(324.78)
324
>>> float(23)
23.0
>>> int(-2.3)
-2
>>> time=15
>>> time/6.0
2.5
>>> minute=59
>>> minute/60.0
0.9833333333333333
>>> 60.0/2
30.0
>>> x=56
>>> float(x)
56.0
>>> type(x)
<class 'int'>
>>> 
>>> 

>>> 


>>> 

>>> 

>>> 

>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> 


>>> 

>>> <class 'int'>
SyntaxError: invalid syntax
>>> 
>>> import math
>>> decibel = math.log10(17.0)
>>> angle = 1.5
>>> height = math.sin(angle)
>>> decibel
1.2304489213782739
>>> height
0.9974949866040544
>>> x = math.cos(angle + math.pi/2)
>>> print(x)
-0.9974949866040544
>>> 
>>> x=math.loge(10)
Traceback (most recent call last):
  File "<pyshell#93>", line 1, in <module>
    x=math.loge(10)
AttributeError: module 'math' has no attribute 'loge'
>>> x=math.exp(math.log(10))
>>> x
10.000000000000002
>>> pow(x,e)
Traceback (most recent call last):
  File "<pyshell#96>", line 1, in <module>
    pow(x,e)
NameError: name 'e' is not defined
>>> pow(5,2)
25
>>> abs(25.1556)
25.1556
>>> abs(-7380)
7380
>>> max(1,2,3,4,5,6,7)
7
>>> math.e
2.718281828459045
>>> pow(math.e,x)
22026.465794806743
>>> exp(5)
Traceback (most recent call last):
  File "<pyshell#104>", line 1, in <module>
    exp(5)
NameError: name 'exp' is not defined
>>> math.exp(4)
54.598150033144236
>>> math.ceil(273.32)
274
>>> math.ceil(2.03)
3
>>> math.floor(20.13)
20
>>> math.sqrt(25)
5.0
>>> math.sqrt(169)
13.0
>>> print()

>>> def newline():
	print()

	
>>> newline
<function newline at 0x00000149279F5DC0>
>>> newlinw()
Traceback (most recent call last):
  File "<pyshell#117>", line 1, in <module>
    newlinw()
NameError: name 'newlinw' is not defined
>>> newline()

>>> print("First line")
First line
>>> newline()

>>> print("Second line")
Second line
>>> 