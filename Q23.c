// Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main(){
  int days;
  printf("days overdue : ");
  scanf("%d",&days);
  int fine;
  if(days==4){
    printf("8");
  }
    else if(days==8){
        printf("32");
  }
  else if(days==15){
    printf("90");
  }
  else if(days==31){
    printf("Membership cancelled");
  }
  return 0;

}