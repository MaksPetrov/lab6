#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    int t = (a/c)*(b/c);
    cout << t << endl << a*b-t*c*c;
}
