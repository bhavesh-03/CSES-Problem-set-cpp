// CPP program to illustrate
// concept of Virtual Functions
#include <iostream>
using namespace std;
class base {
public:
virtual void print()
{
cout << "print base class" << endl;
}
void show()
{
cout << "show base class" << endl;
}
};
class derived : public base {
public:

};
int main()
{
base* bptr;
derived d;
bptr = &d;
// virtual function, binded at runtime
bptr->print();
// Non-virtual function, binded at compile time
bptr->show();
}