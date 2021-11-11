#include<stdio.h>

void transmit(int l,int h){
	int i;
	for(i=l;i<h;i++)
		printf("%d frame transmitted.\n",i);
}

int askAck(){
	int ack;
	printf("Give the acknowldegement for last frame: ");
	scanf("%d",&ack);
	return ack;	
}

int main(){
	int WindowSize,NumberOfFrames;
	printf("Enter window size: ");
	scanf("%d",&WindowSize);
	printf("Enter Number of Frames: ");
	scanf("%d",&NumberOfFrames);
	
	int itr = 0;
	while(itr<NumberOfFrames){
		int i = itr;
		if(i+WindowSize<NumberOfFrames){
				transmit(i,i+WindowSize);
				int ack = askAck();	
				while(ack!=i+WindowSize){
					transmit(ack,i+WindowSize);
					ack = askAck();	
				}
		}
		else{
				transmit(i,NumberOfFrames);	
				int ack = askAck();	
				while(ack!=NumberOfFrames){
					transmit(i=ack,NumberOfFrames);	
					ack = askAck();	
				}
		}
		itr = itr + WindowSize;
	}
	
	printf("All frames Transmitted Completely\n");
}
