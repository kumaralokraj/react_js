#include<iostream>
using namespace std;
class additon{
    int a,b,sum;
    public:
    int input();
    int output();
};
int additon::input(){
    cout<<"Enter the value A & B"<<endl;
    cin>>a>>b;
}
int additon::output(){
sum=a+b;
cout<<"Additon is"<<sum;
}
int main(){
additon obj;
obj.input();
obj.output();
return 0;
}