using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ComplexLib;
namespace ComplexCalcTest
{
    class Program
    {
        static void Main(string[] args)
        {
            MyComplex firstNumber = new MyComplex(2, 4);
            MyComplex secondNumber = new MyComplex(3, 7);

            Console.WriteLine($"First number: {firstNumber.ToString()} \nSecond number: {secondNumber.ToString()}");
            MyComplex result;
            result = MyComplex.Add(firstNumber, secondNumber);
            Console.WriteLine($"Result of add: {result.ToString()}");
            result = MyComplex.Substract(firstNumber, secondNumber);
            Console.WriteLine($"Result of substract: {result.ToString()}");
            result = MyComplex.Multipication(firstNumber, secondNumber);
            Console.WriteLine($"Result of multiply: {result.ToString()}");
            result = MyComplex.Division(firstNumber, secondNumber);
            Console.WriteLine($"Result of divide: {result.ToString()}");

            Console.ReadKey();

        }
    }
}
