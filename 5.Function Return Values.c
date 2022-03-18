#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Modiy the code below
int getRandom1000() {
  int random1000 = rand() % 1000 + 1;
  return random1000;
}

int main(void) {
  srand(time(NULL));
  // Modify the code below
  int randomNumber = getRandom1000();
  printf("My random number is: %d", randomNumber);
}

/*
FUNCTIONS: LESSON
Function Return Values
We now know how to define a function, so let’s look closer at function return values. Calling a function to do some work and return a value is a common use of functions. It is important to understand how to define what type of value is returned and to ensure that it is returned.

Many of the C types we’ve seen so far can be used as a function return type like int, double, char, and even pointers.

int getSecretNumber() {
  int secretNumber = 7;
  return secretNumber;  
}
In the example above:

The function has a return type int
The variable secretNumber, of type int, is set to 7
The variable is returned using return secretNumber
The type of the value returned inside the function must match the type defined in the function signature. If there is a mismatch you will get a compilation error telling you of the mismatch.

Once the return statement is executed, the function gives control back to the function that called it and no further code within the function will be executed. For example:

int getSecretNumber(){
  int secretNumber = 7;
  return secretNumber;  
  printf(“Don’t tell anyone\n”);
}
The printf() statement will not execute and "Don’t tell anyone" will not be displayed in the output terminal.

Instructions
1.
Continuing with random number generation, modify a function definition so it can return a random number from 1 - 1000:

The function getRandom1000() currently has a return type of void.

Change the return type so the function can return an integer.
Checkpoint 2 Passed

Hint
Use the following syntax:

returnType random1000(void){
 
}
2.
Now at the end of the getRandom1000() body:

Return the variable random1000
Checkpoint 3 Passed

Stuck? Get a hint
3.
Lastly, in the main() function:

Replace the 0 with a call getRandom1000() and store the return value in the variable randomNumber.
Checkpoint 4 Passed

Hint
Use the following syntax:

variableType randomVariable = randomFunction();
*/

