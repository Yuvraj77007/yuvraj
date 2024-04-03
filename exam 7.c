#include<stdio.h>
main(){
	FILE *f1,*f2;
	f1=fopen("file1.txt","u");
	f2=fopen("file2.txt","v");
	char y;
	
if(f1==NULL || f2==NULL){
		printf("unable to open files.");
			printf("\n");
	
	}
		while((y=fgetc(f1))!= EOF){
	fputc(y,f2);
	}
	
	printf("files copied succesfully.");
	
fclose(f1);
	fclose(f2);
}
