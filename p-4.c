#include<stdio.h>
float area(int n){
    float c=3.14*n*n;
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    float p=area(n);
    printf("%.2f",p);
    return 0;
}
