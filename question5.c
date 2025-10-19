
#include <stdio.h>

int main() {
    int budget,j,i,found=1;
   int arr[]={1,2,3,4,5,6,7,8,9,10};
   printf("Enter your budget(1-9): ");
   scanf("%d",&budget);
   for(i=0;i<j;i++){
       for(j=9;j>i;j--){
           if(arr[i]+arr[j]==budget){
               found=0;
               printf("\npair found its item:%d and item:%d ",i+1,j+1);
                }
               }
               if(found){
                   printf("pair not found");
               }
   }
   
    return 0;
}
