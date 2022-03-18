#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void repeatDigit(int);
int getRandomNumber(int);

// Define prototypes above
// the function definitions
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
Function Prototypes
So far when we’ve called a function, we had to make sure that it is declared above the line in our code from where we are calling it. If not, the compiler will have not stored the function signature to check if the function call is correct in terms of return and parameter types.

Instead of making sure our functions are always declared above where they are called, a good practice is to define function prototypes at the top of our code:

#include <stdio.h>
 
// function prototypes
int upperFunction(int, int);
void lowerFunction(char*);
 
int upperFunction(int number1, int number2){
  int sum = number1 + number2;
  lowerFunction("The numbers have been added.");
  return sum;
}
 
void lowerFunction(char* string1) {
  printf("%s\n", string1);
} 
 
int main(){
  int sum = upperFunction(4, 2);
}
The above example shows 2 function prototypes toward the top of the code. The main() function calls upperFunction() which then calls lowerFunction(). upperfunction() “knows” about lowerFunction() due to the function prototypes at the top of the code. The compiler is made aware of each function signature before the entire body of the function is implemented.

One thing to note is that the names of the parameters associated with the function are not necessary for a function prototype. The compiler is concerned with 3 things when it comes to function prototypes:

The function name
The return type
The parameter type(s)
Function prototypes are a good practice in C and they help you expand your code without any unforeseen errors due to the compiler not knowing a function signature.

Instructions
1.
Currently, the script.c gets a warning as it seems there are functions being called before they were declared in the program.

Just under the #include statement:

Create a function prototype for repeatDigit()
Just under the first prototype, create a function prototype for getRandomNumber()
Checkpoint 2 Passed

Hint
Remember that we can declare the function prototype at the top of the file by simply specifying the function signature with no body.

*/
