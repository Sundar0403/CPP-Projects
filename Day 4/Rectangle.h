#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include<iostream>
using namespace std;

int wth,hgt,tp,lt;

class Rectangle
{
    private:
        int *width,*height,*top,*left,*area;

    public:
        Rectangle()
        {
            width=new int(0);
            height=new int(0);
            top=new int(0);
            left=new int(0);
        }

        Rectangle(int w,int h)
        {
            width=new int(w);
            height=new int(h);
            top=new int(0);
            left=new int(0);
        }

        Rectangle(int w,int h,int t,int l)
        {
            width=new int(w);
            height=new int(h);
            top=new int(t);
            left=new int(l);
        }

        Rectangle(double w,double h,double t,double l)
        {
            width=new int(getRoundOff(w));
            height=new int(getRoundOff(h));
            top=new int(getRoundOff(t));
            left=new int(getRoundOff(l));
        }

        Rectangle(const Rectangle &r)
        {
            width=new int(*(r.width));
            height=new int(*(r.height));
            top=new int(*(r.top));
            left=new int(*(r.left));
        }

        ~Rectangle()
        {
            delete width;
            delete height;
            delete top;
            delete left;
            delete area;
        }

        int* getArea()
        {
            area=new int(*width**height);
            return area;
        }

        void display()
        {
            cout<<"\n\nThe Rectangular Width : "<<*width;
            cout<<"\n\nThe Rectangular Height : "<<*height;
            cout<<"\n\nThe Rectangular Top : "<<*top;
            cout<<"\n\nThe Rectangular Left : "<<*left;
            area=new int(*width**height);
            cout<<"\n\nThe Rectangular Area : "<<*area;
        }

        int getRoundOff(float value)
        {
            int result;
            if(value>0)
            {
                result=(int)(value+0.5);
            }
            else
            {
                result=(int)(value-0.5);
            }
            return result;
         }
};
#endif // RECTANGLE_H_INCLUDED

