#include<stdio.h>

char flag[100],str[100],stuffed[100],destuffed[100];

int isSub(int ind,char str[]){
	int flag1=1,i=0;
	while(flag[i]!='\0'){
		if(str[ind++]!=flag[i++]){
			flag1=0;
			break;
		}
	}
	return flag1;	
}

void stuffing(){
	int i=0,j=0;
	while(str[i]!='\0'){
		if(isSub(i,str)==1){
			stuffed[j++]=27;	
		}
		stuffed[j++]=str[i];
		i++;
	}
	stuffed[j]='\0';
}

//void destuffing(){
//int i=0,j=0;
//	while(stuffed[i]!='\0'){
//		if(isSub(i+1,stuffed)==1){
//			i++;	
//		}
//		destuffed[j++]=stuffed[i++];
//	}
//	i=0;
//	destuffed[j]='\0';u
//}

int main(){
	printf("Enter flag:\n");
	scanf("%s",flag);
	printf("Enter string:\n");
	scanf("%s",str);
	stuffing();
//	destuffing();
	printf("stuffed: %s %s %s\n",flag,stuffed,flag);
//	printf("destuffed:%s %s %s\n",flag,destuffed,flag);
}
