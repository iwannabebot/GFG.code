using System;
using System.Collections.Generic;
using System.Text;

namespace GFG.code.recursion
{
    public class find_subset_with_sum
    {
        public static void Find_subset_with_sum(int[] set, int sum, int depth, HashSet<int> curr)
        {
            if(sum == 0)
            {
                Console.WriteLine("Done");
                var c = curr.GetEnumerator();
                while (c.MoveNext())
                {
                    Console.Write(c.Current + ",");
                }
            }
            else
            {
                if (depth > 0)
                {
                    HashSet<int> _curr = curr;
                    _curr.Add(set[depth - 1]);
                    Find_subset_with_sum(set, sum - set[depth - 1], depth - 1, _curr);
                    Find_subset_with_sum(set, sum, depth - 1, curr);
                }
            }
            
        }
    }
}
