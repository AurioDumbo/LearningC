#include <stdio.h>
void hello(char name[],int age );
int main(){
    char nome[] = "Aurio";
    int age = 20;
    hello(nome,age);
}
void hello(char name[],int age){
    printf("You are %s\n",name);
    printf("You are %d years old.\n",age);


}

   // WHAT IS IT?
   // Function declaration, w/o a body, before main()
   // Ensures that calls to a function are made with the correct arguments

   // IMPORTANT NOTES
   // Many C compilers do not check for parameter matching
   // Missing arguments will result in unexpected behavior
   // A function prototype causes the compiler to flag an error if arguments are missing

   // ADVANTAGES
   // 1. Easier to navigate a program w/ main() at the top
   // 2. Helps with debugging
   // 3. Commonly used in header files