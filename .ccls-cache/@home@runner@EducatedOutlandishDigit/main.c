/* Filename: Main.c
Description: input four numbers and find the max and min
Author: Edgar Tulodziecki
Date: 14/02/2023
Version: 1 */
#include <stdio.h>

int a;
int b;
int c;
int d;
int max1;
int max2;
int max3;
int max;
int min1;
int min2;
int min3;
int min;

int main(void) {
  printf("Enter Number: \n");
  scanf("%d", &a);
  printf("Enter Number: \n");
  scanf("%d", &b);
  printf("Enter Number: \n");
  scanf("%d", &c);
  printf("Enter Number: \n");
  scanf("%d", &d);

  if(a>b){
    max1 = a;
    min1 = b;
  }
  else {
    max1 = b;
    min1 = a;
  }
  if(c>d){
    max2 = c;
    min2 = d;
  }
  else{
    max2 = d;
    min2 = c;
  }
  if(max1>max2){
    max = max1;
  }
  else max = max2;
  if(min1<min2){
    min = min1;
  }
  else min = min2;

  
  printf("Max: %d Min: %d", max, min);

  
  return 0;
}