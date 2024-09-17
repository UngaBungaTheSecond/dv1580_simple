#include <stdio.h>
#include <stdlib.h>

int is_number(const char *str) { 
    char *endptr; 
    double value = strtod(str, &endptr); 
 
    // Check if the entire string was a valid number 
    if (endptr == str) { 
        return 0; // Not a number 
    } 
 
    return 1; // Is a number 
} 


int main(int argc, char *argv[]){
  
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if(is_number(argv[1]))
  {
    if(is_number(argv[2])){
      printf("%d\n", a+b);
    }
    else{
      printf("-ERROR-\n");
    }
  }
  else{
    printf("-ERROR-\n");
  }
  
  return 0;
}
