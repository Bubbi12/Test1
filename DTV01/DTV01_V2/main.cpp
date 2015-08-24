#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many iterations?" << endl;
    cin >> n;
    int i = 1;
    double summa1 = 0;
    double summa2 = 0;
    double fasti = 0.5;


    while(i < n)
    {
        summa1 += (1.0/(i*i)); //afhverju ekki 1
        summa2 += fasti;
        fasti *= 0.5;
        i++;
    }
    cout << "Sum of geometric series 1: " << summa1 << endl;
    cout << "Sum of geometric series 2: " << summa2 << endl;
    return 0;
}
