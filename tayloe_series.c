#include<stdio.h>
double e(int m,int n){
    static double p=1,f=1;
    double r;
    if(n==0)
    return 1;
    r=e(m,n-1);
    p=p*m;
    p=p*n;
return r+p/f;
}
int main(){
    printf("%lf \n" ,e(3,10));
    return 0;
}