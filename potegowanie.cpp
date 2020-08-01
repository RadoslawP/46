#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int x;
unsigned int y;

int main()
{
    x=(pow(2,32)/2)-1;
    y=pow(2,32)-1;
    cout<<setprecision(20);
    cout <<sizeof(x)<< endl;
    cout <<sizeof(y)<< endl;
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}
