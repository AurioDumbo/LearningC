#include <stdio.h>
#include <string.h> //to manipulate strings
int main(){
    char name[25];
    int age;

    printf("What's your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1]='\0';
    printf("How  old are you?\n");
    scanf("%d",&age); //scanf dont read spaces
    printf("You data are:\n Name:\t%s \n Age:\t%d",name,age);
    return 0;
}