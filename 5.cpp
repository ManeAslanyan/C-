#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum,tokos;
    cin >> a >> b >> c >> tokos;
    sum=a+b+c;
    cout << sum-(sum*tokos/100);
    return 0;
}