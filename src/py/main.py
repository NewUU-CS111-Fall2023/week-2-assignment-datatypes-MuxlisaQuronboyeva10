# * Author:
# * Date:
# Task_4
def string_matching(sent, word):
    index = sent.find(word)
    if index == -1:
        return "No match"
    else:
        return index

sent = input("Enter a sentence: ")
word = input("Enter a word: ")
print(string_matching(sent, word))
