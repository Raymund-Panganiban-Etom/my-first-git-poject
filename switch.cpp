#include <iostream>
using namespace std;
int main(){
    string Deptname;
    int deptnum = 2;

    switch (deptnum)
    {
    case 1: Deptname="Marketing";
        /* code */
        break;
         case 2: Deptname="Development";
        /* code */
        break;
         case 3: Deptname="Sales";
        /* code */
        break;
        
    
    default: Deptname="Unknown";
        break;
    }
    cout<<"Deptname: "<<Deptname<<endl;
    return 0;
}