using System;
using System.Runtime.InteropServices;
namespace CppBind
{
    class Program
    {
        [DllImport(@"../cpp/libhello-cpp.so")]
        public static extern void PrintHelloWorld();
        static void Main(string[] args)
        {
            PrintHelloWorld();
        }
    }
}
