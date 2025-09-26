#include<stdio.h>

int main (void){
    //change from float to double
    double s;
    int i;
    
    s= 100.0;
    for(i=1; i< 10000000; i++){
        s= s + 0.000001;
    }
    printf("%f\n", s);
    return 0;
}