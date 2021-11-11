#include<stdio.h>
#include<string.h>
int main(){
	int i=0,count=0;
	char data[80];
	printf("enter the data\n");
	scanf("%s",data);
	printf("data bits before stuffing\n");
	printf("%s",data);
	printf("data after bit stuffing\n");
	for(i=0;i<strlen(data);i++){
		if(data[i]=='1'){ 
			count++;
			
		}
		else{
			count=0;
		}
		printf("%c",data[i]);
	if(count==5){
		printf("0");
		count=0;
		}
	}
	return 0;
	
}
