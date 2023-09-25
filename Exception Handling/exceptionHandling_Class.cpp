#include <iostream>
using namespace std;
class test
{
    public:
    test(){
        cout<<"Default Constructor called"<<endl;
    }
    ~test(){
        cout<<"Default Destructor called"<<endl;
    }
};
int main()
{
    try
    {
        test t1;
        throw 10;
    }
    catch(int x)
    {

    }
    return 0;
}