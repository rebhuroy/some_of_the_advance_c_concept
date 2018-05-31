#include<stdio.h>
void inc(){
	int i;
	for(i=1;i<=5;i++){
		printf("%d",i);
	}
}


void dec(){
	int j;
	for(j=5;j<=1;j--){
		printf("%d",j);
	}
}
int main(){
	
int i,k;
for(k=0;k<5;k++){
inc();
dec();
printf("\n");

}
}

//1234554321
/*1234 4321
123 321
12 21
1 1*/
