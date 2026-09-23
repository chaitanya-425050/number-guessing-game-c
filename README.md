# 🎯 Number Guessing Game in C

[![C Badge](https://img.shields.io/badge/Language-C-blue)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A clean, interactive number guessing game built in C. The program generates a random number between 1 and 100, and the player must challenge themselves to find it in the fewest attempts possible.

## 🎮 How to Play

1. **Start the Game**: Run the compiled program.
2. **The Challenge**: The computer picks a secret number between **1 and 100**.
3. **Make a Guess**: Enter your number when prompted.
4. **Follow the Hints**: 
   - If your guess is too low, the game says: *"Guess a higher number."*
   - If your guess is too high, the game says: *"Guess a lower number."*
5. **Victory**: Once you guess the correct number, the game reveals how many attempts it took you!
6. **Repeat**: Choose to play another round or quit the game.

**Example Gameplay:**

```text
====================================
   WELCOME TO THE NUMBER GUESSER    
====================================

--- New Game Started ---
Enter a guess between 1 - 100 : 50
Guess a higher number.
Enter a guess between 1 - 100 : 75
Guess a lower number.
Enter a guess between 1 - 100 : 62
Congratulations, You won the game. :)
Found the number in 3 attempts
Enter C/c to continue and Q/q to Quit : q
Thanks for playing, have a good day.
```

## 🛠️ Prerequisites

- **GCC Compiler** (GNU Compiler Collection)
- **Operating System**: Windows (MinGW), macOS, or Linux

## 🚀 How to Compile and Run

### Windows (MinGW)
```bash
gcc number_guess.c -o number_guess.exe
./number_guess.exe
```

### Linux / macOS
```bash
gcc number_guess.c -o number_guess
./number_guess
```

## 💻 Code Implementation

The project is designed with modularity in mind, splitting the logic into four distinct functions:

| Function | Purpose | Key Feature |
| :--- | :--- | :--- |
| `get_guess()` | Input Handling | Validates that input is an integer and within the 1-100 range. |
| `check_guess()` | Game Logic | Provides the "Higher" or "Lower" hints based on the target number. |
| `choice()` | User Menu | Handles the logic for restarting the game or exiting. |
| `main()` | Game Controller | Manages the random seed, the game loop, and the attempt counter. |

## 🎓 Learning Outcomes

Building this project helped me master several core C concepts:
- **Robust Input Validation**: Preventing crashes when users enter letters instead of numbers.
- **Buffer Management**: Using `getchar()` to clear the input stream.
- **Randomization**: Implementing `srand()` and `rand()` for dynamic gameplay.
- **Control Flow**: Managing nested `while` loops to handle multiple game rounds.
- **Modularity**: Creating reusable functions to keep the `main()` function clean.

## 🚀 Future Enhancements
- [ ] **Difficulty Levels**: Add Easy (1-50), Medium (1-100), and Hard (1-1000).
- [ ] **High Score**: Implement a system to save the "Best Score" (lowest attempts).
- [ ] **Limited Tries**: Add a "Game Over" state if the user exceeds a certain number of attempts.

## 📜 License
This project is licensed under the MIT License.

---
*Happy Coding!*


---
