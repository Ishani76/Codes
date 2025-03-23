#include<iostream>
using namespace std;
class calculator{
public :
 double add (double a,double b)
 {return a+b;}
 double subtract (double a, double b)
 {return a-b;}
 double multiply (double a , double b)
 {return a*b;}
 double divide (double a , double b)
 {return a/b;}
};
int main()

{ calculator calc;
double a ,b;
int c;
cout<<"enter two numbers a and b"<<endl;
cin>>a;
cin>>b;
cout<<"choose from 1)Addition ,2) Subtraction, 3) Multiplication , 4) division"<<endl;
cin>>c;
if (c == 1) {
cout<<"sum="<<calc.add(a,b)<<endl;
} 
else if (c==2){cout << "difference ="<<calc.subtract(a,b)<<endl;}
else if (c==3){cout << "Product ="<<calc.multiply(a,b)<<endl;}
else if (c==4){cout << "Quotient ="<<calc.divide(a,b)<<endl;}
else {
    cout<<"Invalid choice!"<<endl;
}
return 0;}