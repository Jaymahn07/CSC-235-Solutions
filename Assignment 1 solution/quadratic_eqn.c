#include<stdio.h>
#include<complex.h>
#include<math.h>

void main(){
    float x,y,c,D,v1,v2;
    

    printf("Enter the coefficient of X** IN THE FORM X^2 +BY + C");
    scanf("%f",&x);

    printf("Enter the coefficient of  Y ** IN THE FORM X^2 +BY + C");
    scanf("%f", &y);

    printf("Enter the coefficient of  C ** IN THE FORM X^2 +BY + C");
    scanf("%f", &c);
    D = (y*y) - (4*x*c);

    v1 =(-y + sqrt(D))/(2*x);
    v2 =(-y - sqrt(D))/(2*x);
    if (D > 0){
        
        printf("Equation has Real root which are %f and %f",v1,v2);
        }
    else if(D==0){
        
        printf("Equation has Equal root which are %f,and %f",v1,v2);
        }
    else{
        
        printf("Equation has Imaginary root which are %f,and %f",v1,v2);
         }
    
    }