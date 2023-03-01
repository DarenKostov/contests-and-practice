#include <stdio.h>
#include <math.h>



int main(){

  int n;
  
  scanf("%d", &n);

  for(int i=0; i<n; i++){

    double a, b, c;
    double resultA, resultB;
    
    scanf("%lf %lf %lf", &a, &b, &c);

    resultA=(-b+sqrt(b*b-4*a*c))/(2*a);
    resultB=(-b-sqrt(b*b-4*a*c))/(2*a);

    printf("%.3lf, %.3lf\n", resultA, resultB);
    
    
  
  }

}

