#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k = 1;
    cout << "Enter the value of n = ";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << k++ << " ";

        cout << "\n";
    }

    return 0;
}