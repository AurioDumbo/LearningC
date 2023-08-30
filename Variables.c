 #include <stdio.h>
 #include <stdbool.h> //we use to work with boolean
int main()
{
    char a = 'C';                   // single character    %c
    char b[] = "";            // array of characters  %s  

   const float C = 3.141592;                          // 4 bytes (32 bits of precision) 7 - 8 digits %f
    double d = 3.141592653589793;  // 8 bytes (64 bits of precision) 15 - 16 digits and use more memory %lf

    bool e = true;                         // 1 byte (true or false) %d
    
    char f = 120;                          // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;       // 1 byte (0 to +255) %d or %c

    short h = 32767;                   // 2 bytes (−32,768 to +32,767) %d
    unsigned short i = 65535;  // 2 bytes (0 to +65,535) %d

    int j = 2147483647;                     // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu
                                                    //after the number, we need to put U,  ofr fix the possible error
                                                      

    printf("%c\n", a);  // char
    printf("%s\n", b);  // character array
    printf("%f\n", C);  // float
    printf("%lf\n", d); // double
    printf("%d\n", e);  // bool
    printf("%d\n", f);  // char as numeric value
    printf("%d\n", g);  // unsigned char as numeric value
    printf("%d\n", h);  // short
    printf("%d\n", i);  // unsigned short
    printf("%d\n", j);  // int
    printf("%u\n", k);  // unsigned int
    printf("%lld\n", l);  // long long int
    printf("%llu\n", m);  // unsigned long long int
    return 0;

}

/*                                            Commentary section

MOST IMPORTANT
c% = character
%s = string (array of characters)
%f = float
%lf = double
%d = integer


                                      
  
    
    we use %0.xlf/f to show x numbers after the common 
    for variable of type char, we can show the number using %d or we can convert to a character with %c using the ASCII Table
    If we pass the max number of a type of variable, it reset to the min value. /Overflow

*/
