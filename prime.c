#include<stdio.h>
int main(){
	
	
	int i,no,c=0,x;
	while(x){
		printf("\nEnter 1 For Recheck");
		scanf("%d",&x);
	switch(x){
	case 1:
	printf("\nEnter The NO");
	scanf("%d",&no);
	c=0;
		for(i=2;i<no;i++){
		
		if(no%i==0){
		c=1;	
		}
	}
	if(c==1){
		printf("\nNOT Prinme");
	}
		else {
		
		printf("\nprinme");
	}
	
	
	break;
	
	default:
		break;
		
}
if(x!=1){
	printf("Bad Choice Exit");
	break;
}

}
	

	return 0;
	
}
