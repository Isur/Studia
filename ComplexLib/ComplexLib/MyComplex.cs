using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ComplexLib
{
    public class MyComplex
    {
        private double real;
        private double imaginary;

        public MyComplex(double real, double imaginary)
        {
            this.real = real;
            this.imaginary = imaginary;
        }

        // PUBLIC

        public static MyComplex Add(MyComplex first, MyComplex second)
        {
            double real = first.real + second.real;
            double imaginary = first.imaginary + second.imaginary;
            MyComplex result = new MyComplex(real, imaginary);
            return result;
        }

        public static MyComplex Substract(MyComplex first, MyComplex second)
        {
            double real = first.real - second.real;
            double imaginary = first.imaginary - second.imaginary;
            MyComplex result = new MyComplex(real, imaginary);
            return result;
        }

        public static MyComplex Multipication(MyComplex first, MyComplex second)
        {
            double real = first.real * second.real - first.imaginary * second.imaginary;
            double imaginary = first.real * second.imaginary + first.imaginary * second.real;
            MyComplex result = new MyComplex(real, imaginary);
            return result;
        }

        public static MyComplex Division(MyComplex first, MyComplex second)
        {
            double real = (first.real * second.real + first.imaginary * second.imaginary) / (second.real * second.real + second.imaginary * second.imaginary);
            double imaginary = (first.imaginary * second.real - first.real * second.imaginary) / (second.real * second.real + second.imaginary * second.imaginary);
            MyComplex result = new MyComplex(real, imaginary);
            return result;
        }

        public static MyComplex Power(MyComplex number, int power)
        {
            if(power == 1)
            {
                return number;
            }
            else
            {
                MyComplex newNumber = MyComplex.Multipication(number, number);
                newNumber = MyComplex.Power(newNumber, power - 1);
                return newNumber;
            }
        }

        public override string ToString()
        {
            if(this.imaginary > 0)
            {
                return $"{this.real} + {this.imaginary}i";
            } else if(this.imaginary < 0)
            {
                return $"{this.real} - {this.imaginary}i";
            } else
            {
                return $"{this.real}";
            }
        }
    }
}
