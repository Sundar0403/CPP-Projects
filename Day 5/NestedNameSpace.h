#ifndef NESTEDNAMESPACE_H_INCLUDED
#define NESTEDNAMESPACE_H_INCLUDED

namespace mathEquation
{
    namespace absolute
    {
        int getAbsolute(int a)
        {
            if(a>0)
            {
                return a;
            }
            return a*(-1);
        }
     }
     namespace power
     {
        int getPowerOf(int a,int x)
        {
            int value=1,i;
            for(i=1;i<=x;i++)
            {
                value=value*a;
            }
            return value;
        }
     }

     namespace squareRoot
     {
        double getSqrt(int a)
        {
            double sqrt=a/2,temp;

            do
            {
                temp=sqrt;
                sqrt=(temp+(a/temp))/2;
            }
            while((temp-sqrt)!=0);
            return sqrt;
        }
     }

     namespace minimum
     {
        int getMin(int a,int b)
        {
            if(a<b)
            {
                return a;
            }
            return b;
        }
     }

     namespace maximum
     {
        int getMax(int a,int b)
        {
            if(a>b)
            {
                return a;
            }
            return b;
        }
     }

}
#endif // NESTEDNAMESPACE_H_INCLUDED
