#include <iostream>

using namespace std;

int main()
{

    double sales;
    double limit = 3000000;
    cout << "Enter Sales" << endl;

    cin >> sales;

    double stateTax = .04 * (sales);
    double countyTax = .02 * (sales);

    double totalTax = stateTax + countyTax;

    cout << "Sales = $" << sales << endl;
    cout << " countyTax =$" << countyTax << endl;
    cout << " stateTax =$" << stateTax << endl;
    cout << "Total Tax = $" << totalTax << endl;

    if (totalTax > limit)
    {
        cout << "You are very Rich" << endl;
    }
    else
    {
        cout << "This country will rip you off" << endl;
    }
}