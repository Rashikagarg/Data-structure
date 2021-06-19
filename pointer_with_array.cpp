#include<iostream>
using namespace std;
int main(){
    int a[5]={6,1,3,4,7};
    int *p;
    p=a;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}