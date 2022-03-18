#include <stdio.h>

// Write your code below
void incrementAge(int* agePointer) {
  *agePointer += 1;
}

int main(void) {
  int age = 42;
  incrementAge(&age);
  printf("%d\n", age);
}

/*
FUNCTIONS: LESSON
Functions with Pointers
We’ve made great progress so far with functions!

Up to this point when a function has received an argument, the function makes a copy of the argument’s value and stores it in the parameter variable. Now any work that the function does on that parameter variable will not affect the original value passed in.

For example:

#include <stdio.h>
 
void myFunc(int a){
  a = a + 2;
  printf("a inside myFunc(): %d\n", a);
}
 
int main(){
  int a = 10;
  myFunc(a);
  printf("a in main(): %d\n", a);
}
 
//OUTPUT:
// a inside myFunc(): 12;
// a in main(): 10;
This is great because we can safely alter the variable value inside the function while maintaining the original value outside.

What if we want to alter the variable inside the function? Instead of passing the actual variable as an argument, we can pass a pointer to the variable. Remember, a pointer is a variable that holds the memory address to another variable. The memory address tells you where the original variable is in memory.

Before we pass a pointer to a function we need to make sure the parameter type matches the type of pointer we are passing. With a pointer as a parameter, the body of the function can directly alter the original value of the pointer that was passed:

void myFunc(int* a){
  *a = *a+2;
  printf("a inside myFunc(): %d\n", *a);
}
 
int main(){
  a = 10;
  int* aPointer = &a;
  myFunc(aPointer);
  printf(“a in main(): %d\n”, a);
}
 
//OUTPUT:
// a inside myFunc(): 12;
// a in main(): 12;
A benefit of using a pointer to a variable as opposed to the variable itself is that it saves memory as the function does not need to allocate more memory for complex data types like arrays.

Instructions
1.
Let’s look at how we can change values in functions using pointers.

Above the main() function:

Define a function named incrementAge() that returns no value
The function should have one parameter, an integer pointer agePointer
The body of the function should increment the value that agePointer points to
Checkpoint 2 Passed

Stuck? Get a hint
2.
Inside the main() function:

Define an integer age, and set it to your age
Call incrementAge() and pass the address of the variable age as the argument
Output the value of age after the function call
You should see that the variable was incremented using the function and the pointer.

Checkpoint 3 Passed

Hint
Use the following syntax to pass a variables address as an argument:

functionName(&variableName);

*/