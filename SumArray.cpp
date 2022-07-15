#include <iostream>
#include <string>
using namespace std;

void SumNumber(int arr[], int s)
{
    int max = 0, sum = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        sum = sum + arr[i];
    }
    sum = sum - max;

    cout << "max :" << max << endl;
    cout << "sum :" << sum << endl;

    if (sum >= max)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

int main()
{
    int arr[] = {1, -11, 6, 4};
    int size = sizeof(arr) / sizeof(*arr);

    SumNumber(arr, size);
}