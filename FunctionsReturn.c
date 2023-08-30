#include <stdio.h>

int square(int x){
    int result = x * x;
    return result;
}
int main(){
    int x = square(3);
    printf("%d",x);
    return 0;
}