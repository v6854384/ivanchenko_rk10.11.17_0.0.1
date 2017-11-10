#include<iostream>

using namespace std;

int main()
{
        int n, i;
        cin >> n;
        int a[n];
        for (i=0; i < n; i++)
        {
                cin >> a[i];
        }
        for (i=0; i < n/2; i++)
        {
                swap(a[i], a[n-i-1]);
        }
        for (i=0; i < n; i++)
                cout << a[i] << " ";
       return 0;
}
