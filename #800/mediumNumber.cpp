//1760A - Medium Number

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }

    return 0;
}