#include<stdio.h>
#include"s.c"

int main(){
extern int b;
char A='A';	
printf("%d",b);
printf("%c",A+32);
printf("\nThis File location is=%s\n",__FILE__);
printf("\nWe Are in =%d\n",__LINE__);

printf("Todays Date is=%s\n",__DATE__);
printf("Now The time is=%s",__TIME__);

return 0;
}
