#include <stdio.h>

// Write your code below
void printMyFavoriteAnimal(void) {
  printf("My favorite animal is a giraffe.");
}

int main(void) {
  printMyFavoriteAnimal();
}

/*
FUNCTIONS: LESSON
Defining Functions
We’ve seen how C comes with many handy libraries full of functions for us to use. Now let’s learn how to make our own! To begin, we need a function signature.

The function signature tells us 3 things:

the function name
how many parameters (inputs) and their types
what type of return value is to be expected
returnType functionName (type1 parameter1, type2 parameter2)
If a function isn’t going to return any value, void is used as the return type. void indicates to the compiler that the function returns no data and should not expect to see the return keyword. Any of the types covered in previous lessons, int, char, boolean, etc, can be used as the return type of a function.

Similarly, if a function has no parameters void should be in place of any parameters. The parameters listed inside the parenthesis are like variable declarations. Each parameter should start with the type and then the name of the parameter.

The code statements “inside” the function are known as the body of the function and are enclosed with curly braces after the function signature.

returnType functionName (type1 parameter1, type2 parameter2) {
  // code statement 1;
  // code statement 2;
 
return output;
}
The signature and the body are the two parts we need to create our own functions.

void makeCookie(){
  printf(“Milk\n”);
  printf(“Flour\n”);
  printf(“Chocolate Chips\n”);
  printf(“Butter\n”);
  printf(“Thanks for the ingredients, here's a cookie!\n”);
}
Instructions
1.
Time to create your first function!

Above the main() function:

Define a new function named printMyFavoriteAnimal()
The function returns no value
The function has no parameters
Leave the body { } of the function empty for now
Checkpoint 2 Passed

Hint
Use the following syntax:

void functionName(void) {
 
}
2.
Inside the body of the function:

Output the message “My favorite animal is a YOUR_ANIMAL_NAME\n”
This completes the function so move on to call your first complete function!

Checkpoint 3 Passed

Hint
Inside the body of printMyFavoriteAnimal() use the following syntax:

printf("Favorite animal string.")
3.
Lastly, inside the main() function:

Call the printMyFavoriteAnimal() function
Checkpoint 4 Passed

Hint
Here’s an example of calling a user-defined function:

int main(){
  functionName();
}

*/

