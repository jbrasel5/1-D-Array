#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int battery[size];

    cout << "Battery inputs:\n";
    for (int percent = 0; percent < size; percent++)
    {
        cin >> battery[percent];
    }

    cout << "Battery: ";
    for (int percent = 0; percent < size; percent++)
    {
        cout << battery[percent] << " ";

    }
    cout << endl;

    int low_count = 0;
    for (int percent = 0; percent < size; percent++)
    {
        if (battery[percent] < 20)
        {
            low_count++;    // lc = lc +1;
        }            

    }
    cout << endl;
    
    cout << "Low readings (<20%): " << low_count << endl;

    return 0;
}
