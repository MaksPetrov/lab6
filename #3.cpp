#include <iostream>

using namespace std;

int main()
{
    int k, n;
    cout << "k = ";
    cin >> k;
    cout << "n = ";
    cin >> n;
    int a = (k+n-1)%7;
    if(a==0)
    {
        cout << 7;
    }
    else
    {
        cout << a;
    }
}
