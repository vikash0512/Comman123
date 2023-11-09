def find_antonym(word):
    antonyms = {
        "hot": "cold",
        "happy": "sad",
        "big": "small",
        "good": "bad",
        "fast": "slow",
        "brave": "timid",
        "bright": "dim",
        "empty": "full",
        "up": "down",
        "love": "hate",
        "victory": "defeat",
        # Add more word-antonym pairs with unique and organic choices
    }

    if word in antonyms:
        return antonyms[word]
    else:
        return "Antonym not found"

# Example usage
input_word = input("Enter a word: ")
antonym = find_antonym(input_word)
print("Antonym:", antonym)
