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
  printf("Light year: e\n");
  printf("Meter: f\n");
  printf("Mile: g\n");
  printf("Nano meter: h\n");
  printf("Pace: i\n");
  printf("Point: j\n");
  printf("Yard: k\n");
  printf("Mile meter: l\n");
  printf("Centi meter: m\n");
  printf(":\n");
  printf(":\n");
  
  
}

typedef struct _unit {
  char * name;
  float grams;
} unit;

unit units[] = {
  {"kilo",1.00}
  {"kilogram",1000.0}
  {"pound",500.0}
  {"ounce",28.3495231}
};


  
main()  {
  

}
