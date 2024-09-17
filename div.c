#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int a = atoi((int)*argv[1]);
  int b = atoi((int)*argv[2]);
  if(b!=0){
    printf("%d\n", a/b);
  }
  else{
    printf("DIV ZERO NOT ALLOWED!\n");
  }
  return 0;
}
