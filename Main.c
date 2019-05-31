#include <stdio.h>
#include <math.h>

int main () {
  
  char fromUnit, toUnit;    // 
  char *fUnit, *tunit;    //
  long double fromValue, meterValue, toValue;   //
  int power = 0;
  
  printf("to convert the 12 Inch to Foot\n");
  printf("enter the unit in the format : dc12\n");
  
  printf("Ell: a\n");
  printf("Femi: b\n");
  printf("Foot; c\n");
  printf("Inch: d\n");
  
  scanf("%c&c&Lf",&fromUnit,&toUnit,&fromValue);
  
  switch(fromUnit) {
    case 'a': meterValue = fromValue * 1.143; fUnit="ell"; break;
    case 'b': mererValue = fromValue ; power = -15; fUnit="fm"; break;
    case 'c': meterValue = fromValue * 0.3048; fUnit="ft"; break;
    case 'd': meterValue = fromValue * 0.0254; fUnit="in"; break;
      
    default: printf("Invalid input"); exit(0);
                 }
  
  switch(toUnit) {
    case 'a': toValue = meterValue/1.143; tUnit="ell"; break;
    case 'b': toValue = meterValue; tUnit="fm"; break;
    case 'c': toValue = meterValue/0.3048; tUnit="ft"; break;
    case 'd': toValue = meterValue/0.0254; tUnit="in"; break;
      
    default: printf("Invalid input"); exit(0);
                 }
  
  if(power == 0)
      printf("%.4Lf %s = %.4Lf%s",fromValue,fUnit,toValue,tUnit);
  else{
    while(tovalue > 10
         printf("%.4Lf %s = %.4Lf*10^%d%s",fromValue,fUnit,toValue,power,tUnit);
      }
          return 0;
          }
