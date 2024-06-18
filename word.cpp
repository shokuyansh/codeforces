#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

void toLowercase(string &s)
{
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });
}

void toUppercase(string &s)
{
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return toupper(c); });
}

int main()
{
    string s;
    int lowCount = 0;
    int upperCount = 0;
    getline(cin, s);
    for (char c : s)
    {
        if (islower(c))
            lowCount++;
        else if (isupper(c))
            upperCount++;
    }
    if (lowCount >= upperCount)
    {
        toLowercase(s);
    }
    else
    {
        toUppercase(s);
    }

    cout << s;
    return 0;
}
