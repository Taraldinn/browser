#include <stdio.h>
int main(void){

char ch ='T';
int r=(int)ch +100;

 printf("%c %d %x\n", ch,ch,ch  );
printf("result:%d\n",r);
// implicit conversion 
//  some implicit conversion do not work then we have to do
return 0;
}