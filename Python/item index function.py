def FuninFinding(input1, input2, item):
    if input2 == 'R':
        # Find the index of the first occurrence of the item from the right end
        index = -1
        for i in range(len(input1) - 1, -1, -1):
            if input1[i] == item:
                index = i
                break
        print("Index of the first occurrence from the right end:", index)
    elif input2 == 'L':
        # Find the index of the first occurrence of the item from the left end
        index = -1
        for i in range(len(input1)):
            if input1[i] == item:
                index = i
                break
        print("Index of the first occurrence from the left end:", index)
    else:
        print("Invalid input2 value. Please provide 'R' or 'L'.")

# Example usage with numeric values
#input_list_numeric = [1, 2, 3, 4, 2, 5, 2]
#input2 = 'L'
#item_numeric = 2
#FuninFinding(input_list_numeric, input2, item_numeric)

# Example usage with string values
input_list_string = ['apple', 'banana', 'cherry', 'banana', 'date']
input2 = 'R'
item_string = 'banana'
FuninFinding(input_list_string, input2, item_string)
