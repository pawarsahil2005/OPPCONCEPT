#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A ()
    {
        cout<<"Call to default constructor"<<endl;
        x=5;
        cout<<x<<endl;
    }
    A (int m){

        x=m;
        cout<<"Call to the parameterised constructor"<<endl;
        cout<<x<<endl;
    }
    A ( A &n)
    {
        x=n.x;
        cout<<"Call to the copy constructor"<<endl;
        cout<<x<<endl;
    }
    ~A()
    {
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    A obj;
    A obj1(7);
    A obj2(obj1);
    return 0;
}