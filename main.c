/* Filename: Main.c
Description: Input a guess and say whether it is higher or lower than the random number out of 100
Author: Edgar Tulodziecki
Date: 14/02/2023
Version: 1 */
#include <stdio.h>
#include <stdlib.h>

int guess;

int main(void) {
  srand(time(NULL));
  int random = rand() % 101;
  while(guess!= random){
    printf("Guess Number: ");
    scanf("%d", &guess);
    if(guess > random){
      printf("Too High \n");
    }
    else if(guess < random) {
      printf("Too Low \n");
    }
  }
  if(guess == random){
    printf("Congrats you got it!");
    }
  return 0;
}