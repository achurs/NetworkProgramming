#include<stdio.h>
int main(){
    int costmat[20][20], distmat[20][20];
    int n,i,j,k;

    //inputing the values
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    printf("Enter the cost matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&costmat[i][j]);
            distmat[i][j] = costmat[i][j];
        }
    }

    //calculating the value of distmat
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(distmat[i][k]+distmat[k][j] < distmat[i][j]){
                    distmat[i][j] = distmat[i][k]+distmat[k][j];
                }
            }
        }
    }

    //printing the values
    for (i=0; i<n; i++) {
        printf("From the node %d\n",i+1);
        for(j=0;j<n;j++){
            if (i!=j) {
                printf("To node %d -> cost is %d\n",j+1,distmat[i][j]);
            }
        }
    }
    for (i=0; i<n; i++) {
        for(j=0;j<n;j++){
            printf("%3d",distmat[i][j]);
        }
        printf("\n");
    }
}