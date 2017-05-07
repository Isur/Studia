using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MandelbrotDraw
{
    public class Complex
    {
        double x;   // real
        double y;   // imaginary

        public Complex(double x, double y)
        {
            this.x = x;
            this.y = y;
        }

        public void Add(Complex c)
        {
            x += c.x;
            y += c.y;
        }

        public void Square()
        {
            double temp = (x * x) - (y * y);
            y = 2.0 * x * y;
            x = temp;
        }

        public void AbsoluteSquare()
        {
            x = Math.Abs(x);
            y = Math.Abs(y);
            double temp = (x * x) - (y * y);
            y = 2.0 * x * y;
            x = temp;
        }

        public double Modulo()
        {
            return Math.Sqrt(x * x + y * y);
        }
    }
}
