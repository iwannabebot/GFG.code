using System;
using System.Collections.Generic;
using GFG.code.recursion;

namespace GFG.code
{
    class Program
    {
        static void Main(string[] args)
        {
            find_subset_with_sum.Find_subset_with_sum(
                new int[] { 2, 5, 8, 11, 3 }, 14, 5, new HashSet<int>());
            find_subsets.Find_subsets(
                new int[] { 2, 5, 8, 11, 3 }, 5, new HashSet<int>());

            Console.WriteLine("");
            Console.WriteLine("Press Any Key to exit");
            Console.ReadLine();
        }
    }
}
