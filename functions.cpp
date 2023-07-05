#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter String ";
    getline(cin, name);

    int size = name.size();
    cout << "You entered " << size << endl;
}