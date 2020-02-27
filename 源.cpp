/*【旱冰场围栏造价】有一个圆形的旱冰场地，围栏用帆布围成，每平方米造价M元，
输入旱冰场半径和围栏高度，用程序计算出其造价。类的声明已给出，
请完善成员函数的定义和主函数。*/
#include<iostream>
using namespace std;
const int M = 20;//水泥场地每平米造价
const int N = 35;//围栏每米造价
const double pi = 3.14;
class Circle
{
private:
		double radius;
public:
		void setRadius(double x);
		double area();//计算报价
		double circumference();
};
int main()
{
	double r;
	cout << "请输入旱冰场半径：";
	cin >> r;
	Circle c;
	c.setRadius(r);
	cout << "旱冰场的造价："<<M*c.area()+N*c.circumference()<<"元"<<endl;
	return 0;

}
void Circle::setRadius(double x)
{
	radius = x;
}
double Circle::area()
{
	double area;
	area =pi * radius * radius;
	return area;
}
double Circle::circumference()
{
	double s;
	s = 2 * pi * radius;
	return s;
}
