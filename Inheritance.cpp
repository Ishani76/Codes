#include<iostream>
using namespace std;
class student{
    public:
    void show(){cout<<"This is the parent class"<<endl;}
};
class teacher:public student{
    public:
    void show (){
    cout<<"This is the child class"<<endl;}};

int main(){
teacher obj;
student s;
obj.show();
s.show();
return 0;}



