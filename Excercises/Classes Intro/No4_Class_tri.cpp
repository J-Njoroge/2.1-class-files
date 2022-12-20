#include<iostream>
using namespace std;
struct Triangle
{
 private:
    int heig, wid;
    double area;
 public:
    void input();
    void output();
    void compute();

};

int main ()
{
    Triangle  tri1;

     tri1.input();

     tri1.compute();

     tri1.output();
    return 0;
}
void Triangle::input()
{
    cout<<"Enter the height and width of the right angled triangle -> ";
    cin>>heig>>wid;
    cout<<"\n";
}
void Triangle::compute()
{
    area = 0.5 * heig * wid;
}
void Triangle::output()
{
   cout<<"The area of the right angled triangle is "<<area<<"\n\n";

}
