#include <stdio.h>
int main(){
    int age;
    printf("How old are you?");
    scanf("%d",&age);
    if(age >= 18){
        printf("You are sign");
    }
    else if (age < 18)
    {
        printf("You are too young to be sign");
    }
    else
    {
        
        printf("Error");
    }
    
    

    return 0;
}