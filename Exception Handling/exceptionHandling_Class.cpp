#include <iostream>
using namespace std;
class test
{
    public:
    test(){
        throw("Exception Occured, No Data was provided in constructor");
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
    }
    catch(char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}