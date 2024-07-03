#include<iostream>
#include<string>
#include<algorithm> // For transform function
using namespace std;

int main()
{
    string p1, p2;
    cin >> p1 >> p2;

    // Convert both strings to lowercase
    transform(p1.begin(), p1.end(), p1.begin(), ::tolower);
    transform(p2.begin(), p2.end(), p2.begin(), ::tolower);

    // Compare the strings directly
    if(p1 == p2)
        cout << 0;
    else if(p1 < p2)
        cout << -1;
    else
        cout << 1;

    return 0;
}
