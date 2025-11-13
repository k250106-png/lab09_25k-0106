#include<stdio.h>
void findRoades(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("road %d and road %d have combined traffic equals to target",i,j);
                return;
            }
        }
    }
}
int main(){
    int n;
    printf("enter number of roades:");
    scanf("%d",&n);
    int arr[n];
    printf("---enter traffic count for each road---\n");
    for(int i=0;i<n;i++){
        printf("road %d:",i);
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter your target:");
    scanf("%d",&target);
    //calling the function
    findRoades(arr,n,target);
    return 0;
}