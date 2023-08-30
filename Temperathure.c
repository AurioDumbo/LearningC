
#include <stdio.h>
#include <ctype.h> //use to maniulate strings
int main(){
    float temp;
    char unit;

    printf("\nWhat is the unit,C or F?");
    scanf("%c",&unit);
    unit = toupper(unit);
    if(unit == 'C'){
        printf("Enter the temperature in C:");
        scanf("%f",&temp);
        temp = (temp * 9/5) + 32;
        printf("\nThe temperature is %.1f Faranheit",temp);
    }
    else if (unit == 'F'){
        printf("Enter the temperture in F:");
        scanf("%f",&temp);
        temp = ((temp -32) * 5) / 9;
        printf("\nThe temperature in Celsius is: %.1f C",temp);
    }
    else{
        printf("%f is a unknown unit, please try again",temp);
    }
    

    return 0;
}