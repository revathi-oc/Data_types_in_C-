//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
void staticExample(){
    //int z=0;
    static int z=0;
    z++;
    cout<< "The value of z is: "<<z<<endl;
}
int main()
{
    cout<<"2.Static storage class"<<endl;
    staticExample();
    staticExample();
    staticExample();   
    return 0 ; 
}