#include<stdio.h>
int main(){
    int a,n;
    scanf("%d",&a);
    n=0;
    for(int i=1;i<=a;i=i+1){
        n=n+i;
    }
    printf("%d",n);
    return 0;

}