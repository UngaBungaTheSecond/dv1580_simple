#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int a = atoi((int)*argv[1]);
  int b = atoi((int)*argv[2]);
  printff("%d\n", a*b);
  return a * b;
}
