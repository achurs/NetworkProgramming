#include "stdio.h"
int main(){
    //entering the variables
    int bucket=0;
    int bucket_size,packet_size,n,i,output_rate;
    printf("Enter the bucket size:");
    scanf("%d",&bucket_size);
    printf("Enter the output rate:");
    scanf("%d",&output_rate);
    printf("Enter the number of packets:");
    scanf("%d",&n);

    //calculation
    for (i=0; i<n; i++) {
        printf("enter the packet size:");
        scanf("%d",&packet_size);
        if(bucket+packet_size<=bucket_size){
            bucket+=packet_size;
            printf("bucket %d out of %d filled\n",bucket,bucket_size);
        }
        else {
            printf("Overflow!!!\n");
        }
        if (bucket>=output_rate) {
            bucket -= output_rate;
            printf("%d is remaining in the buffer after leaky operation\n",bucket);
        }
        else {
            bucket=0;
            printf("%d is remaining in the buffer after leaky operation\n",bucket);
        }
    }
    printf("bucket %d out of %d is the remaining packets in the buffer",bucket,bucket_size);2
    return 0;
}