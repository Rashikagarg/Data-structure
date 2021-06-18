#include<iostream>
using namespace std;
struct Rectangle{
    int lenght;
    int breadth;
};
int main(){
    struct Rectangle r1 = {2,10};
    r1.lenght = 15;
    cout<<r1.lenght<<endl;
    cout<<r1.breadth<<endl;
    return 0;
}