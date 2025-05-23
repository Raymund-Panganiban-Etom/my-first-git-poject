#include <iostream>
using namespace std;
int main(){

string f,l;
int age;
string level;

cout<<"Enter First Name:";
cin>>f;

if(f=="Raymund"){
   cout<<"Enter Last Name:";
cin>>l;

}else{
    cout<<"Wrong first Name:"<<endl;
}



if(l=="Etom"){
    cout<<"Enter Age:";
    cin>>age;
    
}else{
    cout<<"Wrong Last Name!"<<endl;
}

if(age>=18){
cout<<" You can Vote!"<<endl;
}else{
    cout<<"You can't Vote"<<endl;
}
cout<<"Enter Education Level: ";
cin>>level;

if(level=="College"){
    cout<<"Your graduating!"<<endl;
}else{
    cout<<"Your far too graduate!"<<endl;
}

cout<<"====================Summary===================="<<endl;
cout<<"Full Name: "<<f<<" "<<l<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Education Level: "<<level<<endl;

return 0;
}
