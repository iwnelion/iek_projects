import random
import string
myList=["apple","banana","cherry"]

word=random.choice(myList)

print("the word has",len(word),"letters")

guess=input("guess the word: ")

while guess != word:
    print(guess,"is not the hidden word")
    guess=input("guess the word: ")
    if guess == word:
        win=word.upper()
        print("correct guess! you won *",win,"* is the hidden word")
