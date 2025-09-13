#pythonVersion0.2
import random
number = random.randint(1, 100)
attempts = 0

print("Guess a number between 1 and 100")

#Loop:
while True:
    guess = int(input("Enter your guess: ")) #<---Input Handling
    attempts += 1
#Conditionals:
    if guess > number:
        print("Too high!")
    elif guess < number:
        print("Too low!")
    else:
        print(f"Congratulations! You guessed it in {attempts} tries.")
        break
