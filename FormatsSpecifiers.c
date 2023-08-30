#include <stdio.h>
int main(){
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    printf("Item 1 costs: $%5.2f\n",item1);
    printf("Item 2 costs: $%4.2f\n",item2);
    printf("Item 3 costs: $%3.2f\n",item3);
    return 0;
}
/* COMMENT SECTION
format specifiers % = defines and formats a type of data to be display

%.1 = decimal precision
%1 = minium field width
%- = left align

*/

