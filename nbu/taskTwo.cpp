#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string s, char d);
string reverseString(string s);

int main() 
{
    string input;
    getline(cin, input);

    vector<string> words = split(input, ' ');

    for (int i = 0; i < words.size(); i++)
    {
        cout << reverseString(words[i]) << ' ';
    }
    cout << endl;
    
}

vector<string> split(string s, char d)
{
    vector<string> words;
    int spaceIndex = -1;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == d || i == s.length() -1) {
            words.push_back(s.substr(spaceIndex + 1, i - spaceIndex - (i == s.length() - 1 ? 0 : 1)));
            spaceIndex = i;
        }
    }
    
    return words;
    
}

string reverseString(string s)
{
    string out = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        out += s[i];
    }

    return out;
    
}