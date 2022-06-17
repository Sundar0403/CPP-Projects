#ifndef INLINECALLING_H_INCLUDED
#define INLINECALLING_H_INCLUDED
#include "NestedNameSpace.h"

using namespace std;

using namespace mathEquation;

namespace outer
{
    namespace inner
    {
        inline namespace getValue
        {
            int x=100;
        }
    }
}

namespace last=outer::inner;

class InlineCalling
{
    private:
        int a,b;

    public:
        InlineCalling(int a,int b)
        {
            this->a=a;
            this->b=b;
        }

        int getAbsolute()
        {
            return mathEquation::absolute::getAbsolute(a);
        }

        int getPowerof()
        {
            return mathEquation::power::getPowerOf(a,b);
        }

        double getSqrt()
        {
            return mathEquation::squareRoot::getSqrt(a);
        }

        int getMin()
        {
            return mathEquation::minimum::getMin(a,b);
        }

        int getMax()
        {
            return mathEquation::maximum::getMax(a,b);
        }

        int getValue()
        {
            return outer::inner::x;
        }

        int result()
        {
            return last::x;
        }

};
#endif // INLINECALLING_H_INCLUDED
