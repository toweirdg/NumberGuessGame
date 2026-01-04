# Number Guessing Game
# Version 0.3
# Simple CLI game to practice loops, conditionals, and input handling

import random

# Generate the target number once at the start
target_number = random.randint(1, 100)
guess_count = 0

print("Guess a number between 1 and 100")

while True:
    user_input = input("Enter your guess: ")

    # Basic input validation to avoid crashes
    if not user_input.isdigit():
        print("Please enter a valid number.")
        continue

    guess = int(user_input)
    guess_count += 1

    if guess > target_number:
        print("Too high!")
    elif guess < target_number:
        print("Too low!")
    else:
        print(f"Congratulations! You guessed the number in {guess_count} attempts.")
        break
