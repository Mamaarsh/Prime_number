#include <iostream>

using namespace std;

void Prime(int n);

int main()
{
    while(true)
    {
        int num;
        string a;
        cout << "enter number: ";
        cin >> num;

        Prime(num);
        
        cout << "Try again?(yes or no) ";
        cin >> a;
        if(a=="no")
            {
                break;
            }
    }


    return 0;
}

void Prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout << n << " is not Prime!" << endl;
            break;
        }
        else
        {
            if(i==n-1)
            {
                cout << n << " is Prime!" << endl;
            }
        }
    }
}