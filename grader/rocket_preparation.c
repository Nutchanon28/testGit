#include<stdio.h>
int main() {
  int fuel_mass;
  scanf("%d",&fuel_mass);
  int actual_fuel_mass = fuel_mass/3 - 2;
  if(actual_fuel_mass<=0){
    actual_fuel_mass = 0;
  }
  printf("%d",actual_fuel_mass);
  return 0;
}