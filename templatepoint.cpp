#include<iostream>
#include<cstdlib>
using namespace std;

template<class XY >
class templatepoint
{
public:
      void set(XY x, XY y);
      void movepoint( XY x, XY y);
      void rotate_ninety_degrees();
      XY get_x_coord()const;
       XY get_y_coord()const;

private:
   XY x_point;
   XY y_point;
};

int main()
{
templatepoint<double>  p,q;
 p.set(2.0, 1.0);
 p.movepoint(0.0, 1.0); 
 p.rotate_ninety_degrees();
 q.set(-1.0,-1.0);
 q.movepoint(0.0,1.0);
 q.rotate_ninety_degrees();
 cout <<"The x and y coordinates of point p is " <<p.get_x_coord()<<"and "
 <<p.get_y_coord()<<"\n";
 cout <<"The x and y coordinates of point q is "<<q.get_x_coord()<<"and"
<<q.get_y_coord()<<"\n";



return 0;
}
template<class XY>
void templatepoint<XY>:: set(XY x, XY y)
{
   x_point=x;
   y_point=y;

}

template<class XY>
void templatepoint<XY>:: movepoint(XY x, XY y)
{
 x_point += x;
y_point += y;
}

template<class XY>
void templatepoint<XY>:: rotate_ninety_degrees()
{
XY temp_point=x_point;
x_point=y_point*-1;
y_point=temp_point;

}
template<class XY>
XY templatepoint<XY>::get_x_coord()const
{
return x_point;
}
template<class XY>
XY templatepoint<XY>::get_y_coord()const
{
return y_point;
}
