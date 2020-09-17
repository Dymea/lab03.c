// Author: Dymea Schippers
// Collaborator: Olivia Mandola ovm5126@psu.edu
// Collaborator: Michael Sullivan mls6888@psu.edu
// Section: 11R
// Breakout: 11

#include <stdio.h>
#include <math.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n) {
  if (n >= 0) {
    return 1;
    } else {
      return n+sum_n(n-1);
    }
  }

void print_n(char *s, int n) {
  if (n <= 0) {
    printf(s,n);
    print_n(s,n-1);
  }
}

int main(void) {
  char n = readline(atoi("Enter an int: ");
  printf("sum is %i \n", sum_n(n)); 
  char *s = readline("Enter a string: ");
  print_n(s, n);
  return 0;
} 