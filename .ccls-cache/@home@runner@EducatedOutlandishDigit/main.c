/* Filename: Main.c
Description: input four numbers and find the max and min
Author: Edgar Tulodziecki
Date: 14/02/2023
Version: 1 */
#include <stdio.h>
#include <stdlib.h>

int guess;
char ans[6];

int main(void) {
  printf("Guess Number: \n");
  scanf("%d", &guess);
  srand(time(NULL));
  int random = rand() % 101;
  if(guess == random){
    printf("Congrats you got it!");
      return 0;
    }
  if(guess > random){
    printf("Too High");
  }
  else {
    printf("Too High");
    }
  printf("Max: %d Min: %d", max);

  
  return 0;
}