﻿using System;
using System.Collections.Generic;
using System.Text;

namespace GFG.code.hashed_collections
{
    public class basic_hashmap
    {
        static Dictionary<int, string> set = new Dictionary<int, string>();
        static LinkedHashMap<int, string> lset = new LinkedHashMap<int, string>();

        public static void run()
        {

        }
    }


    public class LinkedHashMap<T, U>
    {
        Dictionary<T, LinkedListNode<Tuple<U, T>>> D = new Dictionary<T, LinkedListNode<Tuple<U, T>>>();
        LinkedList<Tuple<U, T>> LL = new LinkedList<Tuple<U, T>>();

        public U this[T c]
        {
            get
            {
                return D[c].Value.Item1;
            }

            set
            {
                if (D.ContainsKey(c))
                {
                    LL.Remove(D[c]);
                }

                D[c] = new LinkedListNode<Tuple<U, T>>(Tuple.Create(value, c));
                LL.AddLast(D[c]);
            }
        }

        public bool ContainsKey(T k)
        {
            return D.ContainsKey(k);
        }

        public U PopFirst()
        {
            var node = LL.First;
            LL.Remove(node);
            D.Remove(node.Value.Item2);
            return node.Value.Item1;
        }

        public int Count
        {
            get
            {
                return D.Count;
            }
        }
    }
}
