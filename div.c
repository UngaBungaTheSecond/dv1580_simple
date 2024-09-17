#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if(b!=0){
    printf("%d\n", a/b);
  }
  else{
    printf("DIV ZERO NOT ALLOWED!\n");
  }
  return 0;
}
