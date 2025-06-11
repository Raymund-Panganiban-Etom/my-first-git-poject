#include <iostream>
using namespace std;
int main(){

int i=0;

do{
    cout<<"Single: "<<i<<" ";
    int y=i*2;
    cout<<"Double: "<<y<<" ";
    int m=i*3;
    cout<<"Triple: "<<m<<endl;
    i++;
}
while (i<=16);
return 0;


}