#include <iostream>

using namespace std;

int search(int arr[], int n, int x)
{
    for  (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;

    }
    return -1;
}

int main()
{
    int arr[100], x, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0; i<n; i++)
            cin >> arr[i];
        cin >> x;
        
        cout << search(arr, n, x) <<endl;

    }
    return 0;

}