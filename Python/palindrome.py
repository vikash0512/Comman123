original=str(input("enter the sting"))
reverse=original[::-1]
print("Reverse Sting",reverse)

if original==reverse:
    print("Sting is palindrome")
else:
    print("String is not palindrome")