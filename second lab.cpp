#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
int real;
int img;
public:
Complex();
Complex(int, int);
Complex (const Complex &z);
void abs()   // Модуль комплексного числа
        {
          cout << "модуль комплексного числа равен:" << endl;
          cout << sqrt(pow(real, 2) + pow(img, 2)) << endl;
           
        }
void TrigonometricForm()   //тригонометрическая форма
{
  double r = sqrt(pow(real, 2) + pow(img, 2));
  double cosx = real/r;
  double sinx = img/r;
  cout << "тригонометрическая форма комплексного числа считается по формуле: r(cosx + i*sinx): получаем => " << r << "*(" << cosx<< "+i*" << sinx << ")"<< endl; 
}
Complex operator+(Complex &);
Complex operator-(Complex &);
Complex operator*(Complex &);
Complex operator/(Complex &);
Complex & operator =(const Complex &c)
{
  this->real = c.real;
  this->img =c.img;

  return *this;
}
bool operator == (Complex &other)
{
  if ((this->real == other.real) && (this->img == other.img))
      {
        cout << "равны" << endl;
        return true;
        
      }
      else
      {
        cout << "не равны" << endl;
        return false;
        
      }
}

friend ostream &operator<<(ostream &, Complex &);
friend istream &operator>>(istream &, Complex &);

~Complex() {
  
}
};
Complex::Complex() {
  real = 0;
  img = 0;
}
Complex::Complex(int r, int i) {
  real = r;
  img = i;
}
//конструктор копирования
Complex::Complex(const Complex &z){
  real = z.real;
  img = z.img;
}

//ПЕРЕГРУЗКИ ОПЕРАТОРОВ

Complex Complex::operator+(Complex &c)
{
  Complex temp;
  temp.real = real + c.real;
  temp.img = img + c.img;
  cout << "результат сложения:" << endl;
  return temp;
  
}
Complex Complex::operator-(Complex &c)
{
  Complex temp;
  temp.real = real - c.real;
  temp.img = img - c.img;
  cout << "результат вычитания:" << endl;
  return temp;  
}

Complex Complex::operator*(Complex &fp1)
    {
    double i, j;
    i = real * fp1.real;
    j = img * fp1.img;
    fp1.real = i;
    fp1.img = j;
    cout << "результат умножения:" << endl;  
    return fp1;
    }

Complex Complex::operator/(Complex &fp)
    {
    double i, j;
    i = real/fp.real;
    j = img/fp.img;
    fp.real = i;
    fp.img = j;
    cout << "результат деления:" << endl;
    return fp;
    }

ostream &operator<< (ostream &fo, Complex &fp)
    {
    char ch;
      if (fp.img>= 0)
        ch ='+';
      else
        ch = '-';
    
    cout << fp.real << ch << abs(fp.img) << "i"<< endl;
 
    return fo;
    }

istream &operator>>(istream &fi, Complex &fp)
    {
    cout << "Введите действительную часть: ";
    fi >> fp.real;
    cout << "Введите мнимую часть: ";
    fi >> fp.img;
    return fi;
    }



int main() 
{
  Complex c1(10,40);
  Complex c2;

  cout << "для числа с2  ";
  cin >> c2;
  Complex c3, c4, c5, c7,c9;
  c3 = c1 +c2;
  cout<< "сумма с1 и с2 равна: " << c3 << "\n";
  c4= c1-c2;
  cout<<"разность с1 и с2 равна: "<<c4 << "\n";
  c5 = c1*c2;
  cout<<"произведение с1 и с2 равна: "<<c5 << "\n"; 
  Complex c6(5,10);
  c9 = c1/c6;
  cout << "частное с1 и с6 равна: "<<c9 << "\n";

  c7 = c5;
  cout << "числа с7 и с5  ";
  bool result = c7 == c5;
  cout << "числа с7 и с1  ";
  bool result2 = c7 == c1;

  cout << "________________________________________________________________"<< endl;
  
  Complex cN(-3,0);
  cN.TrigonometricForm();
  cN.abs();


  
  return 0; 
}