#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = 6;
    int *p;
    p = &x;
    p = &y;
    *p = 10;
    cout << x << endl;
    cout << y << endl;
}