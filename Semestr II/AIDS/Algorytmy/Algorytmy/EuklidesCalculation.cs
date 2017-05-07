using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Euklides
{
    class EuklidesCalculation
    {
        long lowerNumber;
        long higherNumber;
        long temp;

        public EuklidesCalculation(long a, long b)
        {
            if(a > b)
            {
                this.lowerNumber = b;
                this.higherNumber = a;
            }
            else if(b > a)
            {
                this.lowerNumber = a;
                this.higherNumber = b;
            }
            else
            {
                this.lowerNumber = a;
                this.higherNumber = b;
            }
        }

        public long CalculationMinus()
        {
            if(lowerNumber == higherNumber)
            {
                return lowerNumber;
            }
            while(lowerNumber != higherNumber)
            {
                higherNumber = higherNumber - lowerNumber;
                if(higherNumber < lowerNumber)
                {
                    temp = lowerNumber;
                    lowerNumber = higherNumber;
                    higherNumber = temp;
                }
            }
            return lowerNumber;
        }
        public long CalculationDivision()
        {
            if (lowerNumber == higherNumber)
            {
                return lowerNumber;
            }
            while (lowerNumber != 0)
            {
                temp = higherNumber % lowerNumber;
                higherNumber = lowerNumber;
                lowerNumber = temp;
            }
            return higherNumber;
        }
    }
}
