#include<stdio.h>
void fun(int n){
    if(n>0){
        printf(" %d ",n);
        fun(n-1);
    }
}
int main(){
int n=5;
fun(n);
return 0;
}