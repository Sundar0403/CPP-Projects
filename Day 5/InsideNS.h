#ifndef INSIDENS_H_INCLUDED
#define INSIDENS_H_INCLUDED

namespace newSpace
{
    class InsideNS
    {
        private:
            int a,b,sum;

        public:
            InsideNS(int a,int b)
            {
                this->a=a;
                this->b=b;
            }

            int squareSum()
            {
                sum=getSquare(a)+getSquare(b);
                return sum;
            }

            int getSquare(int value)
            {
                int result=0;
                result=value*value;
                return result;
            }
    };
    #endif // INSIDENS_H_INCLUDED
}
