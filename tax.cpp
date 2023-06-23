#include <iostream>

using namespace std;

int main()
{
    double sales = 95000;
    double stateTax = .04 * (sales);
    double countyTax = .02 * (sales);

    double num = 4;
    double div = (num / 100);

    cout << "Sales = $" << sales << endl;
    cout << " countyTax =$" << countyTax << endl;
    cout << " stateTax =$" << stateTax << endl;
    cout << "Total tax = $" << stateTax + countyTax << endl;

    cout << div << endl;
}