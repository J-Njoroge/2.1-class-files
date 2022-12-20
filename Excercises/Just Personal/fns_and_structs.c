#include<iostream.h>

float RectArea(float width, float length)
float RectPeri(float width, float length)

int main()
{
    float ar, per, wid,leng;
    cout << "Enter the  width and length of the rectangle: ";
    cin >> wid >> leng;

    ar = RectArea(wid, leng);
    per = RectPeri(wid, leng);

    cout << "The area of the rectangle is: " << ar;
    cout << "\nThe perimeter of the rectangle is: " << per;

}
