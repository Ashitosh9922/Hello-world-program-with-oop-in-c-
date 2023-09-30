#include <iostream>
using namespace std;
class Hello{
public:
Hello(){}
~Hello(){}
void display ()
{
cout<<"\n This is a Hello World in c++";
}

int main ()
{
Hello myobject;
myobject.display();
return 0;
}
