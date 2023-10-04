using namespace std;
#include<iostream>
#include<string.h>
struct Rectangle
{
	float length;
	float breadth;
	
	Rectangle()
	{
		this->length=0.0;
		this->breadth=0.0;
	}
	Rectangle(float length,float breadth)
	{
		this->length=length;
		this->breadth=breadth;
	}
	void setLength(float length)
	{
		this->length=length;
	}
	void setBreadth(float Breadth)
	{
		this->breadth=breadth;
	}
	float getLength()
	{
		return this->length;
	}
	float getBreadth()
	{
		return this->breadth;
	}
};
struct Triangle
{
	float base;
	float height;
	
	Triangle(float base,float height)
	{
		this->base=base;
		this->height=height;
	}
	Triangle()
	{
		this->base=0;
		this->height=0;
	}
	void setBase(float base)
	{
		this->base=base;
	}
	void setHeight(float height)
	{
		this->height=height;
	}
	float getBase()
	{
		return this->base;
	}
	float getHeight()
	{
		return this->height;
	}
};
struct Circle
{
	float radius;
	
	Circle()
	{
		this->radius=0.0;
	}
	Circle(float radius)
	{
		this->radius=radius;
	}
	void setRadius(float radius)
	{
		this->radius=radius;
	}
	float getRadius()
	{
		return this->radius;
	}
};
struct ShapeOperation
{
	float calculate(Triangle t1)
	{
		float area=(t1.getBase()*t1.getHeight())*0.5;
		return area;
	}
	float calculate(Rectangle r1)
	{
		float area=r1.getLength()*r1.getBreadth();
		return area;
	}
	float calculate(Circle c1)
	{
		float area=3.14*c1.getRadius()*c1.getRadius();
		return area;
	}
};
int main()
{
	Rectangle r1(3,5);
	Triangle t1(4,6);
	Circle c1(3.4);
	ShapeOperation sop;
	cout<<"Area of Rectangle with length "<<r1.getLength()<<" and breadth "<<r1.getBreadth()<<" = "<<sop.calculate(r1)<<"\n";
	cout<<"Area of Triangle with base "<<t1.getBase()<<" and height "<<t1.getHeight()<<" = "<<sop.calculate(t1)<<"\n";
	cout<<"Area of Circle with radius "<<c1.getRadius()<<" = "<<sop.calculate(c1);
}
