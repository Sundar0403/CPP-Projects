#include<iostream>
#include "Rectangle.h"

int getWidth()
{
    cout<<"\nEnter the Width :";
    int width=0;
    cin>>width;
    return width;
}

int getHeight()
{
    cout<<"\nEnter the Height :";
    int height=0;
    cin>>height;
    return height;
}

int getTop()
{
    cout<<"\nEnter the Top :";
    int top=0;
    cin>>top;
    return top;
}

int getLeft()
{
    cout<<"\nEnter the Left :";
    int left=0;
    cin>>left;
    return left;
}

float getWidth(float)
{
    cout<<"\nEnter the Width :";
    float width=0;
    cin>>width;
    return width;
}

float getHeight(float)
{
    cout<<"\nEnter the Height :";
    float height=0;
    cin>>height;
    return height;
}

float getTop(float)
{
    cout<<"\nEnter the Top :";
    float top=0;
    cin>>top;
    return top;
}

float getLeft(float)
{
    cout<<"\nEnter the Left :";
    float left=0;
    cin>>left;
    return left;
}



int main()
{
    Rectangle r;
    r.display();


    Rectangle r1(getWidth(),getHeight());
    r1.display();

    Rectangle r2(getWidth(),getHeight(),getTop(),getLeft());
    r2.display();

    Rectangle r3(getWidth(0),getHeight(0),getTop(0),getLeft(0));
    r3.display();

    Rectangle r4(r2);
    r4.display();

    return 0;
}
