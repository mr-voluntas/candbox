🧠 Project Notes: Number Guessing Game v2

Goal:
Rewrite the original number guessing game from scratch, using more advanced C features like struct, enum, modular design, and better input handling. Focus on clean architecture, reusability, and testability.
📌 Project Overview

The game challenges the player to guess a randomly generated number in a fixed number of attempts. Version 2 will improve on the structure, UX, and maintainability of the first version using intermediate C concepts.
🔧 Core Features (from v1)

    User guesses number 1–10

    Player has 3 attempts

    Feedback if guess is too high/low/correct

    Option to play again

🌱 New Features / Improvements for v2
🧱 Structure & Design

Use GameResult struct to return from the game loop:

typedef struct {
    bool won;
    int attemptsUsed;
} GameResult;

Replace string feedback with enum:

typedef enum {
    TOO_LOW,
    TOO_HIGH,
    CORRECT
} GuessFeedback;

    Split project into multiple files:

        main.c — app flow

        game.c — logic

        game.h — function prototypes, structs/enums

🧪 Testing

Create test functions for:

    evaluateGuess()

    provideHint()

    isCorrectGuess()

Use assert() or simple test runner

Mock user input if possible for getPlayerGuess() (advanced)

    Add test summary output

🔐 Input Handling

Add input validation:

    Ensure guess is an integer

    Ensure guess is within valid range (1–10)

Use input buffer cleanup:

    while (getchar() != '\n');  // flush leftover input

🌟 User Experience Enhancements

Show remaining guesses ("You have 2 guesses left!")

Print a final "You lost!" message if all attempts are used

Use puts() instead of printf() for simple lines

Pause after each game (e.g., "Press Enter to start again")

    Make UI more inviting and clear

🧠 Learning Goals

    Practice using struct and enum

    Learn to organize a C program into header/implementation files

    Build testable functions and write test runners

    Improve user interaction and input safety

🗂️ Future Extensions

    High score tracking

    Difficulty levels (easy: 1–10, hard: 1–100)

    Timer for guesses

    Multiplayer or AI opponent
