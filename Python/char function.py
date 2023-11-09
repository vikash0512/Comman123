def analyze_paragraph(paragraph):
    capital_count = 0
    small_count = 0
    whitespace_count = 0

    for char in paragraph:
        if char.isupper():
            capital_count += 1
        elif char.islower():
            small_count += 1
        elif char.isspace():
            whitespace_count += 1

    return capital_count, small_count, whitespace_count

# Example usage
user_paragraph = input("Enter an English paragraph: ")
capital_letters, small_letters, whitespaces = analyze_paragraph(user_paragraph)
print("Total capital letters:", capital_letters)
print("Total small letters:", small_letters)
print("Total whitespaces:", whitespaces)
