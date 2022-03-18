#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Modify the code below
int getRandomNumber(int maxNumber) {
  int randomNumber = rand() % maxNumber + 1;
  return randomNumber;
}

int main(void) {
  srand(time(NULL));
  // Modify the code below
  int randomNumber = getRandomNumber(100);
  printf("My random number is: %d", randomNumber);
}

/*
FUNCTIONS: LESSON
Function Parameters
In the last exercise, we created a function random1000() that returned a random number between 1 and 1000. What if we wanted the upper bound to be 10000 or 1000000? We could define new functions like getRandom10000() or getRandom1000000(). There must be a better way.

Besides returning values, functions can customize their behavior based on the argument passed to them. This is done by defining parameters in the function signature.

Parameters are variable definitions that take place in between the parentheses of the function signature. They have a type and are given a name to be used inside and only inside the function body. Let’s take a look!

int addTwo(int number1, int number2) {
  int sum = number1 + number2;
  return sum;
}
 
int main() {
  int addedNumbers = addTwo(3, 6);
  // addedNumbers = 9
}
In the example above:

The addTwo() function is defined with an integer return type
The function takes two integer parameters, number1 and number2 to be used inside the function body
The function adds the numbers together, assigns them to an integer, sum and returns sum
One thing to keep in mind is if the parameter type and the argument passed to a function do not match, a warning or an error will occur when we run the code.

#include <stdio.h>
 
void sayIt(int number) {
  printf("%d\n", number);
}
 
int main(void) {
  char* string = "Hi!";
  sayIt(string);
}
The code above will produce a warning that the sayIt function argument type, char* and the parameter type, int are not the same. This will result in unwanted behavior.

The last thing to note about parameters is if a function does not have any parameters you should put void in between the parentheses. Leaving them empty will usually be OK, but it is best practice to use void.

Instructions
1.
The getRandom1000() function has been changed to getRandomNumber(). Modify the remaining part of the function definition:

Add an integer parameter maxNumber
Checkpoint 2 Passed

Hint
Use the following function definition syntax:

returnType functionName(parameterType parameter) {
 
}
2.
Inside the getRandomNumber() body, use the parameter to set the range:

Replace the upper range number in the random equation with, maxNumber
Checkpoint 3 Passed

Hint
Use the following syntax:

randomVariable = rand() % parameterVariable + 1
3.
Now test the new function out!

Inside the main() function:

Assign randomNumber to getRandomNumber() with the argument 100
You can now generate a random number between 1 and any number you want. Good job!

Checkpoint 4 Passed

Hint
Use the following syntax:

functionName
*/
