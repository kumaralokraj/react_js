#include<iostream>
using namespace std;
class addition{
    int a,b,sum;
    public:
    int input(){
        cout<<"Enter to value A &B"<<endl;
        cin>>a>>b;
    }
    
    int output(){
      sum=a+b;
      cout<<"The sum is"<<endl;
      cout<<sum<<endl;  
    }
};
int main(){
addition a1;
a1.input();
a1.output();
return 0;
}