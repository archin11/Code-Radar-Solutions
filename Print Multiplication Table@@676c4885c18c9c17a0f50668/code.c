#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=10;i=i+1){
        printf("%d x %d = %d\n",a,i,i*a);
    }
}