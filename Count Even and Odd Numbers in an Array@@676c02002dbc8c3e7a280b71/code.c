#include<stdio.h>
int main(){
    int even=0;
    int odd=0;
    int arr[];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            even +=1;
        }else if(arr[i]%2!=0){
            odd +=1;
        }
    }
    printf("%d %d",even,odd);
    return 0;
    
}