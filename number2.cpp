#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float const b = 2.5;
    float arr[] = {1.1, 2.4, 3.6, 1.7, 3.9};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
       cout << (1 + pow(sin(pow(b, 3) + pow(arr[i], 3)), 2))/pow((pow(b, 3) + pow(arr[i], 3)), 1/3) << endl;
    }

    return 0;
}