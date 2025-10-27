#include<stdio.h>
int main (){
    float c , f ; // c for celcius and f for fahrenheit 
    printf("enter temperature in celcius : ");
    scanf("%f" , &c);
    
    printf("temperature in fahrenheit : %f " , c*9/5+32 );

    return 0;
     

}