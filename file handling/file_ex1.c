#include<stdio.h>
int main(){
		int i;
	
	char ch;
	FILE *fp;

	// the file entering input as a single charrecter
		fp=	fopen("rebhu.txt","w");
	//while((ch=getchar())!=EOF){
//               putc(ch,fp);
//	}
	
	
	
	// the file getting out put of this specific file
	
	for(i=0;i<20;i++){
		putw(i,fp);
	}
	fclose(fp);
	
	
	
	
	
	fp=	fopen("rebhu.txt","r");
	while((ch=getc(fp))!=EOF){
	printf("%c\n",ch);
	}
	fclose(fp);
return 0;	
}



