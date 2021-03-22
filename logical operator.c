#include <stdio.h>
#include <stdbool.h>

int main(void){

bool have_nid=false;
bool is_adult=true;

bool is_premitted=have_nid && is_adult;
printf("permission- %d\n",is_premitted);


return 0;
}