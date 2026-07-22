#include<iostream>
using namespace std;
int main(){
    int units;
    float bill =0;
    int FixCharges=500;
    float tax;
    cout<<"Enter the units = ";
    cin>>units;
    if(units<=100){
        bill=units*50;
    } else if(units<=200){
        bill = (100*50)+((units-100)*100);
    }else if(units<=300){
        bill = (100*50)+(100*100)+((units-200)*150);
    }else{
        bill=(100*50)+(100*100)+(100*150)+((units-300)*200);
    }
    tax=bill*10/100;
    cout<<"The bill is = "<<bill<<endl;
    cout<<"The Tax is = "<<tax<<endl;
    cout<<"The FixCharges is = "<<FixCharges<<endl;
    cout<<"The Total Bill is = " <<bill+tax+FixCharges;
    return 0;
}