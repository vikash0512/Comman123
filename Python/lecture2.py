# Python to convert (days,hours,minutes,seconds
time=float(input('enter the time in seconds: '))
days=time//(24*3600)
hours=time//3600
time%=3600
#time%=60
minutes=time//60
time%=60
sec=time
print(days,hours,minutes,sec)