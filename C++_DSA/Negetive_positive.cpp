#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the Number:"<<endl;
    cin>>number;
    if(number>0){
        cout<<"The Number is positive"<<endl;
    }
    else if(number==0){
        cout<<" The Number is 0"<<endl;
    }
    else{
        cout<<" The Number is a negetive number "<<endl;
    }
}