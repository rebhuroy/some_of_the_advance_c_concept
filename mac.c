#include<stdio.h>
#define a (10+10)
#define f(a) a*a
#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))
int main(){
	printf("%d\n",a);

	printf("%d",f(30));
printf("\n%d",min(10,20));
	printf("\n%d",max(10,20));
	return 0;
}
