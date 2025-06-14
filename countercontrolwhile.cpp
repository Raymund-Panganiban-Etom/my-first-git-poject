// counter control while loop

#include <iostream>
using namespace std;
int main(){

    int num1 =0;
    int num2 =0;

    while (num1 <=7){
        num1 ++;
        num2 += num1;

        cout<<"Programmer: "<<num2<<endl;
    }
}