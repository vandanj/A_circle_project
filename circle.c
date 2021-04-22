#include<stdio.h>
#define PI 3.14

int main(){
    float r;
    float area;
    scanf("enter radius %f",&r);
    area=PI*r*r;
    printf("the area of the circle is %0.3f",area);
    return (0);
}
