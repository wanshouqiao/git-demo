
// 测试git专用
// hot-fix测试
// master分支修改，测试合并冲突
// hot-fix分支修改，测试合并冲突
class Complex{
private:
  float real, img;
public:
  Complex();  //无参构造函数
  Complex(float r = 0, float i = 0);  //有参构造函数
  Complex(const Complex & cx);   //拷贝构造函数
  ~Complex();  //析造函数
  Complex add(Complex c); //类中的成员函数，表示一个复数具有的行为
  Complex minus(Complex c);
  Complex multiply(Complex c);
  Complex division(Complex c);
};

Complex::Complex()
{
  real = 1;
  img = 0;
  cout << "The complex object is constructed." << endl;
}
Complex::Complex(float r, float i)
{
  real = r;
  img = i;
}
Complex::~Complex()
{
  
}

Complex Complex::add(Complex c)
{
  complex temp;
  temp.real = real + c.real;
  temp.img = img + c.img;
  return temp;
}
Complex Complex::minus(Complex c)
{n
  Complex temp;
  temp.real = real - c.real;
  temp.img = img - c.img;
  return temp;
}
Complex Complex::multiply(Complex c)
{
  Complex temp;
  temp.real = real*c.real - img*c.img;
  temp.img = real*c.img + img*c.real;
  return temp;
}
Complex Complex::division(Complex c)
{
  
}

#include <iostream>
using namespace std;
int main()
{
  Complex num1(2,3);
  Complex num2(1,2);
  Complex sum = num1.add(num2);
  cout << "num1+num2=" << sum << endl;
  return 0;
}
