#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int run;
    float avg;

    Cricketer(string name, int run, float avg){
        this->name=name;
        this->run=run;
        this->avg=avg;
    }
};

int main(){
    int  x=2;
    cout<<&x<<endl;
    int *p =&x;
    cout<<p;
}