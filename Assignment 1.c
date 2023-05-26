#include <stdio.h>

int main(void) {
  int allowance, meals, airtime_data, transport,stationary, total, balance;
  allowance = 1500000;
  meals = 1000000;
  airtime_data = 150000;
  transport = 50000;
  stationary =  300000;
  
  total = meals +airtime_data + transport + stationary;
  balance = allowance - total;

  printf ("my allowance is \t %d.\n \nout of which I will spend: \n ", allowance);

  printf("\nmeals = \t %d\n \nairtime and data = \t %d\n \ntransport = \t %d\n \nstationary = \t %d\n ", meals, airtime_data, transport, stationary);

  printf("\n The total cost is %d\n", total);

  printf("\nMy balance is %d", balance);

  printf("\nYou have you have no emergency money left over, therefore your allowance is insufficient");
  
  
}