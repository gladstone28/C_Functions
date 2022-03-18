#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int absValue = abs(-5);
  printf("%d\n", absValue);
}
/*
FUNCTIONS: LESSON
Introduction
As you continue to write more code there will be times when you’ll need to reuse a set of instructions. You might be tempted to reuse the code by copying and pasting it, but in times like this, a function is a great tool to use.

A function is a group of instructions that is given a name to be used elsewhere in the code, often repeatedly. Functions can take in a set of inputs and produce some output.
In the photo above we use the idea of a function to make cookies. We collect a set of instructions (the recipe) under the name makeCookie. Baking a cookie requires a set of inputs (the ingredients). The instructions inside the function act on the input ingredients to produce the output (a cookie!).

Functions are great because:

You can write DRY (Don’t Repeat Yourself) code.
You can execute any number of instructions with a single line of code.
Once a function exists, you only need to worry about the inputs and output and not about the instructions inside.
In C, you have already worked with one function. The main() function is the entry point to any C program and you will understand it better as you go through this lesson.

Instructions
Look at the main() function in the script.c file. There are 2 lines, one that calls a function abs() and then the printf() function to output the value in absValue.

Run the program to see the output think about all the things happening in the code that we can’t see. This is a good example of DRY (Don’t Repeat Yourself) coding in the C programming language.
*/