#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 2;
    cout << "Enter a number " << endl;
    cin >> x;
    bool isprime = true;

    if(x > 2)
    {
        while(i < x)
        {
            if(x % i == 0)
            {
                cout << x << " is not a prime number!" << endl;
                isprime = false;
                break;
            }
            i++;
        }
    }
   if(isprime)
   {
       cout << x << " is a prime number!" << endl;
   }
    return 0;
}
