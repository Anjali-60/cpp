// delete all duplicate elements from array

#include <iostream>
using namespace std;
int main()
{
    int n, i, arr[20], j, pos = 0;
    cout << "Enter the number of digits = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                pos = j;
                for (int k = pos; k < n; k++)
                    arr[k] = arr[k + 1];
                n--;
            }
        }
    }
    cout << "\n Array after deletion of duplicate elements is : ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}