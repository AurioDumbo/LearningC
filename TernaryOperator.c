#include <stdio.h>
int findMax(int x, int y){
return(x > y) ? x : y;
}
int main(){
    int max = findMax(3, 5);
    printf("%d",max);
    return 0;
}

//Ternary operator(?) is a shortcut of if/else condition.