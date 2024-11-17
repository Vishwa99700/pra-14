
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    cout<< "Enter the base" <<endl;
    int a;
    cin>>a;
    cout<< "Enter the exponent" <<endl;
    int b;
    cin>>b;
    int p;
    p= pow(a,b);
    cout << "Power is =" <<p<< endl;
    return 0;
}
