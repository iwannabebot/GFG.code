using System;
using System.Collections.Generic;
using System.Text;

namespace GFG.code.recursion
{
    public class find_subsets
    {
        public static void Find_subsets(int[] set, int depth, HashSet<int> curr)
        {

            if (depth > 0)
            {
                curr.Add(set[depth - 1]);
                Find_subsets(set, depth - 1, curr);
                curr.Remove(set[depth - 1]);
                Find_subsets(set, depth - 1, curr);
            }
            else
            {
                var c = curr.GetEnumerator();
                while (c.MoveNext())
                {
                    Console.Write(c.Current + ",");
                }
                Console.WriteLine();
            }
        }
    }
}
