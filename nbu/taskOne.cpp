#include <iostream>
#include <vector>

using namespace std;

const int MIN = -40;
const int MAX = 49;
int getRand(int min, int max);

int main() {
    int len;
    cin >> len;

    int arr[len];
    vector<int> evenNegativeOddPositive;

    for (int i = 0; i < len; i++)
    {
        int num = getRand(MIN, MAX);
        arr[i] = num;
        if ((num < 0 && num %2 == 0) || (num > 0 && num % 2 == 1))
        {
            evenNegativeOddPositive.push_back(num);
        }
        cout << num << ' ';
    }
    cout << endl;

    for (int i = 0; i < evenNegativeOddPositive.size(); i++)
    {
        cout << evenNegativeOddPositive[i] << ' ';
    }
    cout << endl;
    
    

}

int getRand(int min, int max)
{
    return min + (rand() % (max - min + 1));
}