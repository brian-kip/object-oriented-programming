//program to show inheritance
#include<iostream>
using namespace std;
class shape;
{
public:
void setWidth(int w)
{
	width=w;
}
void setHeight(int h)
{
	height=h;
}
protected:
	int width;
	int height;
	{
		
	}
class Rectangle:public shape
{
	public:
		int getArea()
		{
return(width*height);
		}
}
class Triangle:public Shape
{
 public:
        int getArea()
        {
return(width*height)/2;
		}
}
int main(void)
{
Rectangle R;
R.setWidth(6);
R.setHeigh(8);

cout<<"Area of rectangle:"<<R.getArea()<<endl;

Triangle T;
T.setWidth(5);
T.setHeight(6);
cout<<"Area of Triangle:"<<T.getArea()<<endl;
return 0;
}	
