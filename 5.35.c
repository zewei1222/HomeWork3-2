#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d",&a);
    unsigned long long *f = (unsigned long long *)malloc(sizeof(unsigned long long)*a);
    f[0]=0;
    f[1]=1;
    int i;
    for(i=2;i<a;i++){
        f[i]=f[i-2]+f[i-1];
    }
    printf("%llu",f[a-1]);
}
