#include<stdio.h>
int main(){
    int n,fac;
    fac=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        if(n%i==0){
            fac=fac+1;
        }
        
    }
    if(fac>2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}