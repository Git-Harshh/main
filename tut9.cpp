#include<iostream>
using namespace std;

int main(){

    //    cout<<"this is tutorial 9";
    int age;
    cout<<"tell me your age";
    cin>>age;
    if(age<18)
    cout<<"you can't come to the party"<<endl;
    else if (age==18)
    {
        cout<<"You are a kid, and u will et a permit to the party"; 
    } 
    else {
        cout<<"you can come to the party";
    }

    
    return 0;
};