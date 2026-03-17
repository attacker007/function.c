#include<stdio.h>
int sum(int n){
    int sums=0;
    while(n>0){
        int rem=n%10;
        sums=sums+rem;
        n=n/10;
    }
    return sums;
}
int main(){
    int n;
    scanf("%d",&n);
    int p=sum(n);
    printf("%d",p);
}
