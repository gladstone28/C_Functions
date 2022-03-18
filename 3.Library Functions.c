#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  // Write your code below
  int randomNumber = rand() % 20 + 1;
  printf("The random number is %d\n", randomNumber);
  
}

/*
FUNCTIONS: LESSON
Library Functions
Now that we know how to call functions, use their arguments and capture their return values, let’s take a look at some functions provided by the C programming language.

C gives us access to many useful libraries that include many different functions for you to use. In order to have access to these functions you need to include header files like <stdio.h> and <stdlib.h>.

You have already used printf() to output text to the console and learned about abs() to find the absolute value of an integer. Here are a few more functions we might use in your programs:

ceil(): takes any number as an argument, rounds it up to the nearest integer, and returns the integer.
log(): takes an integer as an argument and returns the natural logarithm of the given number.
toupper(): takes a char as an argument and returns the uppercase of any alphabetic character.
isupper(): takes a char as an argument and returns 1 if the character is an uppercase letter, 0 otherwise.
Let’s use these functions in some code:

#include <stdio.h>
#include <math.h>
#include <ctype.h>
 
int main() {
  float number = 4.5;
  char letter = 'a';
  printf("%f\n", ceil(number)); // 5.000000
  printf("%f\n", log(number)); // 1.504077
  printf("%d\n", isupper(letter)); // 0
  letter = toupper(letter);
  printf("%d\n", isupper(letter)); // 1
}
In the above example:

The math.h and ctype.h libraries are used in this code.
The number variable is passed to ceil() and output. The result is 5.000000.
The number variable is passed to log() and output. The result is 1.504077.
The letter variable is passed to isupper() and output. The result is 0 which represents False.
The letter variable is passed to toupper() and assigned to letter.
The new value in the letter variable is passed to isupper() and output. The result is 1 which represents True.
There are many useful functions contained in the C standard libraries. Here is a list of some of them. It is worth looking through them to see how they can help your code.

Instructions
1.
Now let’s look at some more libraries and their functions to create some random numbers.

In script.c there are 3 #include statement:

The first is needed for printf().
#include <stdlib.h> is needed for 2 random number generator functions, srand() and rand().
#include <time.h> is needed to use the time() function.
Inside the main() function is the line srand(time(NULL));. Without this line of code, every random number generated in this exercise will be the same number each time you run the code. Look in the hint for more details on this line of code.

Move to the next exercise to continue with the random number code.

Checkpoint 2 Passed

Hint
The srand() function is used to set the seed for the random number generator. The seed initializes the random generation and should be a number that changes over time. The time() function is used as the srand() argument to ensure that the seed is a different number every time the code is run. When passed the argument NULL, the time() function will return the number of seconds passed since the date, January 1, 1970.

2.
With the random number generator initialized, it is time to get a random number. This is done by saving the return value of the function rand().

Inside the main() function:

Declare an integer variable randomNumber and set it equal to rand()
Output the value of randomNumber using printf()
If you run the code multiple times, you should get a large but somewhat different number each time.

Checkpoint 3 Passed

Stuck? Get a hint
3.
There’s a good chance if you were programming a game that wanted to roll some dice, the number being generated right now would not be helpful in its current form. To get the number we want we will use the modulus (%) operator.

Inside the main() function:

Using %, change the line of code, int randomNumber = rand() so that randomNumber will be between 0 and 19
Add a + 1 to the end of the code so randomNumber becomes a number between 1 and 20.
Every time you run the code you should now get a number between 1 and 20.

Checkpoint 4 Passed

Hint
Use the following syntax:

int randomVariable = rand() % 20 + 1;
*/
