#include<iostream>
#include <string>
using namespace std;
class teacher{
    public:
    string name;
    string department;
    string subject;
    double salary;
    
    void changedept(string newdept){
        department = newdept;
    }

};
int main(){
    teacher t1;
    t1.name="Ishani";
    t1.subject="c++";
    cout<<t1.name<<endl;
    return 0;

}