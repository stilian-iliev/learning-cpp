#include <iostream>

using namespace std;

int main() 
{
    int *a, b;

    b = 1;

    a = new int(6);

    cout << *a << endl;

    *a = 4;

    cout << b << endl;
    delete a;

    char arr[]{'a', 'b', 'c'};

    char *c;

    c = &arr[0];

    *c = 'd';

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    
    

}