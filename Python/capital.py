database = {}  # Dictionary to store country-capital pairs

def AddMe():
    country = input("Enter the country name: ")
    capital = input("Enter the capital: ")
    database[country] = capital
    print("Entry added successfully.")

def FindMe(input_country):
    if input_country in database:
        return database[input_country]
    else:
        return "Capital not found for the given country."

def DelMe(input_country):
    if input_country in database:
        del database[input_country]
        print("Entry deleted successfully.")
    else:
        print("Country not found in the database.")

# Example usage
AddMe()
AddMe()
country_name = input("Enter a country name to find its capital: ")
capital = FindMe(country_name)
print("Capital:", capital)
country_to_delete = input("Enter a country name to delete its entry: ")
DelMe(country_to_delete)
