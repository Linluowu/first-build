#include <iostream>
using  namespace std;
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(int argc,char **arge){
    int val1 = 10;
    int val2 = 20;
    cout<<"before"<<endl;
    cout<<val1<<endl;
    cout<<val2<<endl;
    swap(val1,val2);
    cout<<"after"<<endl;
    cout<<val1<<endl;
    cout<<val2<<endl;
    return 0;
}
