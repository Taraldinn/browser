#include <stdio.h>
int main(){

  int line,space,star;
  for ( line = 0; line < 4; line++)
  {
    for(space=3;space>line;space--){
        printf(" ");
    }
    for ( star = 0; star < (2*line)+1; star++)
    {
      printf("*");
    }
    
    printf(" \n");
  }
  
   
  return 0;
          }
