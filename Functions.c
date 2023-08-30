#include <stdio.h>
void birthday(char x[], int y)
{
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!", y);
}

int main()
{
    char name[] = "Bro";
    int age = 21;

    birthday(name, age);

    return 0;
}
/*A function in C is a block of code that performs a specific task. It is the basic building block of a C program that provides modularity and code reusability 12345
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
 A function can be called multiple times to provide reusability and modularity to the C program
 a parameter is a variable that is defined in the function declaration and is used to receive values from the calling function . 
 Parameters are used to pass data to a function so that the function can perform some operation on it.

An argument is a value that is passed to a function when it is called .
 Arguments are used to provide data to a function so that it can perform some operation on it.*/