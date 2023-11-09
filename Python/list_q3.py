l=[]
n=int(input("enter the lenght of the list"))
for i in range(1,n+1):
    e=int(input("enter element"))
    l.append(e)

print(l)
l.sort()
print(l)
print("the largest no is",l[-1])
