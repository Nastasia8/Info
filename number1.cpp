#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float const b = 2.5;
    float x_n = 1.28;
    float x_k = 3.28;
    float x_step = 0.4;
    float y;
    for (float i = 0; i < x_k; i+=x_step)
    {
        y = (1 + pow(sin(pow(b, 3) + pow(i, 3)), 2))/pow((pow(b, 3) + pow(i, 3)), 1/3);
        cout << "y(" << i << ") = " << y << endl;
    }
    return 0;
}