#include <iostream>
#include <cmath>
using namespace std;

float height(float distance, float angle);
int main()
{
    cout << "Enter the distance : ";
    float distance;
    cin >> distance;
    cout << "Enter the angle : ";
    float angle;
    cin >> angle;
    float height2 = height(distance, angle);
    cout << "The height of the tree is : " << height2 << endl;
}
float height(float distance, float angle)
{
    float height1 = distance * tan(angle / 57.2958);
    return height1;
}
