#include <stdio.h>

int main(void) {
  int num1 = -5;
  int num2 = 42;
  // Write your code below
  printf("The two numbers are %d and %d.", num1, num2);
}

/*
FUNCTIONS: LESSON
Calling a Function
As we’ve seen, the code printf("Hello, World\n") outputs the string between the parentheses to the console. The general usage of a function is to “call” the given name with a set of parentheses. Any input that is needed for the function is placed inside the parentheses.

These inputs are commonly known as the arguments of the function. Certain functions take no arguments, some take one and some take multiple. No matter the case, it is important to know what arguments a function expects so we use the correct values in the correct spots.

The printf() function can change its behavior based on the number of arguments it receives.

#include <stdio.h>
 
printf("Hello, World!"); // Outputs: Hello, World!
int num = 9;
printf("My number is %d", num); // Outputs: My number is 9
In the example above, the first printf() call takes the string "Hello, World!" as an argument. The output is the string. The second printf() call takes two arguments, a string and a variable. The output this time is the string with the variable inserted where indicated by %d. These two uses of printf() show the flexibility that is allowed when using functions.

Lastly, a function can return its output and used further. For example:

#include <stdio.h>
#include <stdlib.h>
 
int absValue = abs(-5);
printf(“Absolute value of -5: %d\n”, absValue);
 
// Output
// Absolute value of -5: 5
In the example above, we use a different function abs(), which returns the absolute value of an integer passed as an argument. We are able to use this function by adding the line #include <stdlib.h> to the top of the code.

As we can see, when we call abs(-5) we are assigning it to the integer absValue. This assigns the value returned by abs(-5) to the variable absValue. This is shown by outputting the value which is 5.

Instructions
1.
Let’s take a look at the different function argument configurations of printf().

In script.c, add a call to printf() with no arguments.

You should get an error when you call printf() with no arguments?

Checkpoint 2 Passed

Hint
Use the following syntax:

printf();
2.
Now add a string of your choice to the arguments of printf().

Does the code work now?

Checkpoint 3 Passed

Hint
Use the following syntax:

printf("Your string.");
3.
Now add the value in variable num1 to the output.

Be sure to add the variable as an argument and adjust your string to support the variable output.

Checkpoint 4 Passed

Hint
Use the following syntax:

printf("Your string %d", variable);
4.
Can we add another variable to the output? Give it a try!

Add the variable num2 as the 3rd argument and adjust the string to output the values in both variables.

Checkpoint 5 Passed

Hint
Use the following syntax:

printf("Your string %d %d", variable1, variable2);

*/