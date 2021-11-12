# Hello
In Hello, your task is to write a program that greets someone by their name. 

## Getting Started
1. Open a terminal
2. Execute `mkdir hello` to create a folder called `hello`.
3. Then move into that folder by executing `cd hello`.

## Your 1st program
Create a new file and call it `hello.c`. Add the following code into the file:
```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Hello, world\n");
}
```
Then run `make hello`. That compiles your program. 
To run the newly compiled program, execute `./hello`.


## Greeting a user
Change the program so that the program prompts the user for their name and then prints `Hello, ` and the user's name.

### Implementation Details
 * You might want to use `get_string()` and store the result in a variable of type `string`.
 * To print out `Hello, [user's name]`, you should use `printf` formatting codes, which is a fancy phrase for *placeholder*.
    * So `printf("Hello, %s\n", name);` where `name` is a variable of type `string`

# Testing
Run `check50 daltongit/checks/c/hello`.

## Submit
Ready to submit? Run `submit50 daltongit/checks/c/hello` to submit.
