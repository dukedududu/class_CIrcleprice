/*��������Χ����ۡ���һ��Բ�εĺ������أ�Χ���÷���Χ�ɣ�ÿƽ�������MԪ��
���뺵�����뾶��Χ���߶ȣ��ó�����������ۡ���������Ѹ�����
�����Ƴ�Ա�����Ķ������������*/
#include<iostream>
using namespace std;
const int M = 20;//ˮ�ೡ��ÿƽ�����
const int N = 35;//Χ��ÿ�����
const double pi = 3.14;
class Circle
{
private:
		double radius;
public:
		void setRadius(double x);
		double area();//���㱨��
		double circumference();
};
int main()
{
	double r;
	cout << "�����뺵�����뾶��";
	cin >> r;
	Circle c;
	c.setRadius(r);
	cout << "����������ۣ�"<<M*c.area()+N*c.circumference()<<"Ԫ"<<endl;
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
