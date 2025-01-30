#include <stdio.h>
int main(){
    int n;
    int no;
    scanf("%d%d",&n,&no);
    if(!(n>0) && !(no>0)){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}