#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void repeatDigit(int);
int getRandomNumber(int);

void repeatDigit(int repetitions) {
  int digit = getRandomNumber(9);
  for(int i = 0; i < repetitions; i++) {
    printf("%d ", digit);
  }
  printf("\n");
}

int getRandomNumber(int maxNumber) {
  int randomNumber = rand() % maxNumber + 1;
  return randomNumber;
}

int main(void) {
  srand(time(NULL));
  int repetitions = getRandomNumber(10);
  repeatDigit(repetitions);
}

/*
FUNCTIONS: LESSON
Summary
Great job learning about functions! We’ve managed to cover many important topics like:

Functions are a named set of instructions
Functions can take in a set of inputs and produce some output
Functions help you write DRY (Don’t Repeat Yourself) code
C comes with many libraries that contain useful, ready-to-use functions
Function calls can take arguments and return values
Functions are made up of a function signature and body.
void can be used as a return or parameter type
A function returns a value with a return statement in the body
A function can have parameters that are placeholder variables for the function
Pointers can be used as function parameters to help with memory management
Function prototypes are good practice in C
With the help of functions, you can now build larger, cleaner projects.

Instructions
Try to refactor the code in the main() function from the beginning of the lesson with all the knowledge you now have.

You can also use the space to play around and explore your knowledge of functions. Have fun!
*/
