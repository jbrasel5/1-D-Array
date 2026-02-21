#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size];

    for (int index = 0; index < size; index++)
    {
        // Valid indexes are from 0 to "size - 1"
        // - that's why the loop must stop at "< size", not "<= size"
        cin >> arr[index];
    }

    return 0;
}
