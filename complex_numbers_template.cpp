//Tiffany Schiff
//program:maincomplex
//synopsis: Class complex performs arithmetic operation for imaginary numbers.

#include<iostream>
#include<cstdlib>

using namespace std;

template<class C_Real, class C_Img>
class Complex
{
public:

Complex();
Complex(C_Real r, C_Img img);
Complex (const Complex<C_Real,C_Img>& s); //copy constructor
~Complex(){}; //destructor
template<class C_Real_1, class C_Img_1>
friend ostream& operator <<(ostream& outputStream, const Complex<C_Real_1, C_Img_1>& ri);
template<class C_Real_1, class C_Img_1>
friend istream& operator >>(istream& inputStream, Complex<C_Real_1, C_Img_1>& ri);
void setreal(const C_Real& r){ real=r;}
void setimg(const C_Img& img){ imaginary=img;}
C_Real getreal(){return real;}
C_Img getimg(){return imaginary;}
Complex operator+(const Complex<C_Real, C_Img> &t) const;
Complex operator-(const Complex<C_Real, C_Img> &t) const;
Complex operator*(const Complex<C_Real, C_Img> &t) const;
Complex operator/(const Complex<C_Real, C_Img> &t) const;
Complex  operator=(const Complex<C_Real, C_Img>& t);
Complex operator +=(const Complex<C_Real, C_Img>& t);
Complex operator++(); //prefix ++operator
Complex operator++(int ignore); //postfix ++operator


private:
C_Real real;
C_Img imaginary;

};

int main()
{
Complex<double,double> Q_1(10.0,20.0), Q_2(5.0,10.0), Q_3(20.0,10.0);
cout<<"Q_1= "<<Q_1<<"\n";
cout<<"Q_2= "<<Q_2<<"\n";
cout<<"Q_3= "<<Q_3<<"\n";
cout<<"The sum is "<<Q_1+Q_2+Q_3<<"\n"; 
cout<<"The product is "<<(Q_1*Q_2)<<"\n";
cout<<" The quotient is "<<Q_1/Q_3<<"\n"; 
Complex<double,double> Q_4;
cout<<"Enter a complex number"<<"\n";
cin>>Q_4;
cout<<Q_4<<"\n";
Complex<float,float> Q_5(3.14456,-5.46789);
cout<<"Q_5="<<Q_5<<"\n";
return 0;

}
template<class C_Real, class C_Img>
Complex<C_Real,C_Img>:: Complex(): real(0), imaginary(0)
{ }
template<class C_Real, class C_Img>
Complex<C_Real,C_Img>:: Complex(C_Real r, C_Img img): real(r), imaginary(img)
{  }
template<class C_Real, class C_Img>
Complex<C_Real,C_Img>:: Complex(const Complex<C_Real, C_Img>& s): real(s.real), imaginary(s.imaginary)
{  }//copy constructor

template<class C_Real, class C_Img>
ostream& operator <<(ostream& outputStream, const Complex<C_Real, C_Img>& ri)
{
 C_Real final_real= ri.real;
C_Img final_img= ri.imaginary;

                 if(final_img < 0)
                 {
                  C_Img signch = final_img*-1;
                  outputStream<<final_real<<'-'<<'i'<<signch;
                  return outputStream;
                 }                              
 
outputStream<<final_real<<'+'<<'i'<<final_img;
return outputStream;
}
template<class C_Real,class C_Img>
istream& operator >>(istream& inputStream, Complex<C_Real, C_Img>& ri)
{

C_Real real_input;
inputStream >> real_input;
ri.real=real_input;

char plus_bar;//gets the + or minus input
inputStream >> plus_bar;

char i;//gets imaginary number i
inputStream >> i;

     if((plus_bar !='+' || plus_bar !='-') && i !='i')
     {
      cout<<"No +/- and i number in your input.\n";
      exit(1);
     }

C_Img img_input;
inputStream >> img_input;
ri.imaginary = img_input;

return inputStream;
  }
template<class C_Real, class C_Img>
Complex<C_Real, C_Img> Complex<C_Real, C_Img>:: operator+(const Complex<C_Real, C_Img> &t)const//adds two complex numbers
{
C_Real r= real + (t.real);
C_Img img =imaginary +(t.imaginary);

cout<<"Addition\n";
return Complex(r, img);
}

template<class C_Real, class C_Img>
Complex<C_Real, C_Img> Complex<C_Real, C_Img>:: operator-(const Complex<C_Real,C_Img> &t)const//subtracts two complex numbers
{
C_Real r= real - (t.real);
C_Img img =imaginary -(t.imaginary);

cout<<"Subtraction\n";
return Complex(r, img);
}

template<class C_Real, class C_Img>
Complex<C_Real, C_Img> Complex<C_Real,C_Img>:: operator*(const Complex<C_Real,C_Img> &t)const
{
C_Real r= real*t.real - imaginary*t.imaginary;
C_Img img=real*t.imaginary+imaginary*t.real;
cout<<"Multiplication\n";
return Complex(r, img);
}

template<class C_Real,class C_Img>
Complex< C_Real, C_Img> Complex<C_Real, C_Img>:: operator/(const Complex<C_Real, C_Img> &t)const
{
C_Real d=t.real*t.real+ t.imaginary*t.imaginary;
C_Real r= (real*t.real + imaginary*t.imaginary)/d;
C_Img img= (t.real*imaginary-real*t.imaginary)/d;
cout<<"Division\n";
return Complex(r, img);
}

template<class C_Real, class C_Img>
Complex<C_Real, C_Img> Complex<C_Real, C_Img>:: operator=(const Complex<C_Real, C_Img>& t)
{
   //return Complex(t.real,t.imaginary);
 
}
template<class C_Real, class C_Img>
Complex<C_Real, C_Img> Complex<C_Real, C_Img>:: operator++()
{
 C_Real r = real+1;
 C_Img img = imaginary+1;
 return Complex(r,img);
}
template<class C_Real, class C_Img>
Complex<C_Real, C_Img> Complex<C_Real, C_Img>:: operator++(int ignore)
{
C_Real r = real;
C_Img img = imaginary;
real++;
imaginary++;

return Complex(r, img);
}
template<class C_Real,class C_Img>
Complex< C_Real,  C_Img> Complex<C_Real, C_Img>:: operator+=(const Complex<C_Real, C_Img> &t)//adding the second complex 
{                                                //number to the first
  real += (t.real);
imaginary += (t.imaginary);

cout<<"Addition\n";
return Complex(real, imaginary);
}
