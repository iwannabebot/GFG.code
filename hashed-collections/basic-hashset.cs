using System;
using System.Collections.Generic;
using System.Text;

namespace GFG.code.hashed_collections
{
    public class basic_hashset
    {
        static HashSet<string> set = new HashSet<string>();

        public static void run()
        {

        }
    }

    public static class Extensions
    {
        public static void Remove<T>(this HashSet<T> set, T item, bool trimExcess)
        {
            set.Remove(item);
            set.TrimExcess();
        }
    }
}
