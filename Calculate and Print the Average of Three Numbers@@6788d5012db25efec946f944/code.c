#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    float Average;
    scanf("%d%d%d",&a,&b,&c);
    Average= (float)(a+b+c)/3;
    printf("Average: %.2f",Average);
    return 0;
}