#include<stdio.h>
 
int main()
{
    int w,i,f;
    printf("Enter window size: ");
    scanf("%d",&w);
    printf("\nEnter number of frames to transmit: ");
    scanf("%d",&f);
    printf("\nEnter %d frames: ",f);
    int frames[f];
    for(i=1;i<=f;i++)
        scanf("%d",&frames[i]);
    for(i=1;i<=f;i++)
    {
        if(i%w==0)
        {
            printf("%d\n",frames[i]);
            printf("Acknowledgement of above frames sent is received by sender\n\n");
        }
        else
            printf("%d ",frames[i]);
    }
 
    if(f%w!=0)
        printf("\nAcknowledgement of above frames sent is received by sender\n");
 
    return 0;
}
