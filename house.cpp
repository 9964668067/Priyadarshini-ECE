#include <iostream>
using namespace std;
float areaofCircle (float radious)
{
    return 3.14 * radious * radious;
}
float areaofTriangle(float height, float width)
{
    return 0.5 * height * width;
}
float areaofRectangle(float height, float breath)
{
    return height * breath;
}
int main()
{
    float fullArea = areaofRectangle(10, 10) +areaofTriangle(5,12);
    float subArea = areaofRectangle(3,7) + areaofCircle(2)+areaofRectangle(2,3);
    cout << fullArea -subArea << endl;
    
}
