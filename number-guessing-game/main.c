#include <stdbool.h>
#include <stdio.h>

int getPlayerGuess(void) {
  int guess;
  scanf(" %d", &guess);
  return guess;
};

bool isPlayerGuessCorrect(int target, int guess) { return guess == target; }

char *provideHint(int target, int guess) {
  if (guess < target) {
    return "Your guess was a too small";
  } else {
    return "Your guess was a too big";
  };
};

// implement this later.
int generateRandomNumber(void) { return 8; };

void startGuessingGame(void) {

  int targetNumber = generateRandomNumber();
  int guessCount = 1;
  bool didPlayerGuessCorrect = false;

  while (guessCount <= 3) {

    printf("\n\nGuess %d: ", guessCount);

    int guess = getPlayerGuess();
    guessCount++;

    if (isPlayerGuessCorrect(targetNumber, guess)) {
      printf("You guessed correct, you win!");
      didPlayerGuessCorrect = true;
      break;
    } else {
      printf("%s", provideHint(targetNumber, guess));
    }
  }

  if (!didPlayerGuessCorrect) {
    printf("\n\n\nLooks like that was your last guess. You loose...");
  }
};

char getPlayAgainChoice(void) {
  char playAgain;
  scanf(" %c", &playAgain);
  return playAgain;
};

int main() {

  printf("Enter a number between 1 and 10\n");

  while (true) {
    startGuessingGame();

    printf("\n\nWould you like to play again? (y/n): ");
    if (getPlayAgainChoice() == 'n') {
      return 0;
    }
  };

  return 0;
};
