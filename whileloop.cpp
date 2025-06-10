// while loop

#include <iostream>
using namespace std;
int main(){
    const int num_loops = 19;
    int numtimes=1;
    while (numtimes<=num_loops)
    {
        /* code */
        cout<<"Value of numtimes is: "<<numtimes<<endl;

        numtimes+=2;
    }
    return 0;
}