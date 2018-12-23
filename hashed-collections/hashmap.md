## HashMap

## Dictionary (HashMap in C#)

#### Characteristics of Dictionry:

The <code>Dictionary<TKey, TValue></code> collection in C# is same as English dictionary. English dictionary is a collection of words and their definitions, often listed alphabetically in one or more specific languages. In the same way, the Dictionary in C# is a collection of Keys and Values, where key is like word and value is like definition.

The <code>Dictionary<TKey, TValue></code> class is a generic collection class in the System.Collection.Generics namespace. TKey denotes the type of key and TValue is the type of TValue.

The following diagram illustrates the generic Dictionary class hierarchy.

![genericc-dictionary](http://www.tutorialsteacher.com/Content/images/csharp/generic-dictionary.png)

|PROPERTY|DESCRIPTION|
|---|---|
|<code>Count<code>|Gets the total number of elements exists in the Dictionary<TKey,TValue>.|
|<code>IsReadOnly<code>|Returns a boolean indicating whether the Dictionary<TKey,TValue> is read-only.|
|<code>Item<code>|Gets or sets the element with the specified key in the Dictionary<TKey,TValue>.|
|<code>Keys<code>|Returns collection of keys of Dictionary<TKey,TValue>.|
|<code>Values<code>|Returns collection of values in Dictionary<TKey,TValue>.|

|METHOD|DESCRIPTION|
|---|---|
|<code>Add<code>|Adds an item to the Dictionary collection.|
|<code>Add<code>|Add key-value pairs in Dictionary<TKey, TValue> collection.|
|<code>Remove<code>|Removes the first occurance of specified item from the Dictionary<TKey, TValue>.|
|<code>Remove<code>|Removes the element with the specified key.|
|<code>ContainsKey<code>|Checks whether the specified key exists in Dictionary<TKey, TValue>.|
|<code>ContainsValue<code>|Checks whether the specified key exists in Dictionary<TKey, TValue>.|
|<code>Clear<code>|Removes all the elements from Dictionary<TKey, TValue>.|
|<code>TryGetValue<code>|Returns true and assigns the value with specified key, if key does not exists then return false.|

---

## HashMap in Java

HashMap is a part of Java’s collection since Java 1.2. It provides the basic implementation of Map interface of Java. It stores the data in (Key, Value) pairs. To access a value one must know its key. HashMap is known as HashMap because it uses a technique called Hashing. Hashing is a technique of converting a large String to small String that represents same String. A shorter value helps in indexing and faster searches. HashSet also uses HashMap internally. It internally uses a link list to store key-value pairs already explained in HashSet in detail and further articles.

#### Characteristics of HashMap:

Few important features of HashMap are:

1. HashMap is a part of java.util package.
2. HashMap extends an abstract class AbstractMap which also provides an incomplete implementation of Map interface.
3. It also implements Cloneable and Serializable interface. K and V in the above definition represent Key and Value respectively.
4. HashMap doesn’t allow duplicate keys but allows duplicate values. That means A single key can’t contain more than 1 value but more than 1 key can contain a single value.
5. HashMap allows null key also but only once and multiple null values.
6. This class makes no guarantees as to the order of the map; in particular, it does not guarantee that the order will remain constant over time. It is roughly similar to HashTable but is unsynchronized.

Internally HashMap contains an array of Node and a node is represented as a class which contains 4 fields :

|HashMap Node|
|---|
|int hash||
|K key|
|V value|
|Node next|

It can be seen that node is containing a reference of its own object. So it’s a linked list.



|METHOD|DESCRIPTION|
|---|---|
|<code>void clear()<code>|Used to remove all mappings from a map.|
|<code>boolean containsKey(Object key)<code>|Used to return True if for a specified key, mapping is present in the map.|
|<code>boolean containsValue(Object value)<code>|Used to return true if one or more key is mapped to a specified value.|
|<code>Object clone()<code>|It is used to return a shallow copy of the mentioned hash map.|
|<code>boolean isEmpty()<code>|Used to check whether the map is empty or not. Returns true if the map is empty.|
|<code>Set entrySet()<code>|It is used to return a set view of the hash map.|
|<code>Object get(Object key)<code>|It is used to retrieve or fetch the value mapped by a particular key.|
|<code>Set keySet()<code>|It is used to return a set view of the keys.|
|<code>int size()<code>|It is used to return the size of a map.|
|<code>Object put(Object key, Object value)<code>|It is used to insert a particular mapping of key-value pair into a map.|
|<code>putAll(Map M)<code>|It is used to copy all of the elements from one map into another.|
|<code>Object remove(Object key)<code>|It is used to remove the values for any particular key in the Map.|
|<code>Collection values()<code>|It is used to return a Collection view of the values in the HashMap.|
|<code>compute(K key, BiFunction<K,V> remappingFunction)</code>|This method Attempts to compute a mapping for the specified key and its current mapped value (or null if there is no current mapping).|
|<code>computeIfAbsent(K key, Function<K> mappingFunction)</code>|This method If the specified key is not already associated with a value (or is mapped to null), attempts to compute its value using the given mapping function and enters it into this map unless null.|
|<code>computeIfPresent(K key, BiFunction<K,V> remappingFunction)</code>|This method If the value for the specified key is present and non-null, attempts to compute a new mapping given the key and its current mapped value.|
|<code>forEach(BiConsumer<K,V> action)</code>|This method Performs the given action for each entry in this map until all entries have been processed or the action throws an exception.|
|<code>getOrDefault(Object key, V defaultValue)</code>|This method returns the value to which the specified key is mapped, or defaultValue if this map contains no mapping for the key.|
|<code>merge(K key, V value, BiFunction<K,V> remappingFunction)</code>|This method If the specified key is not already associated with a value or is associated with null, associates it with the given non-null value.|
|<code>putIfAbsent(K key, V value)</code>|This method If the specified key is not already associated with a value (or is mapped to null) associates it with the given value and returns null, else returns the current value.|
|<code>replace(K key, V value)</code>|This method replaces the entry for the specified key only if it is currently mapped to some value.|
|<code>replace(K key, V oldValue, V newValue)</code>|This method replaces the entry for the specified key only if currently mapped to the specified value.|
|<code>replaceAll(BiFunction<K,V> function)</code>|This method replaces each entry’s value with the result of invoking the given function on that entry until all entries have been processed or the function throws an exception.|


---

[`Dictionary`][1] is probably the closest. `System.Collections.Generic.Dictionary` implements the [`System.Collections.Generic.IDictionary`][2] interface (which is similar to Java's `Map` interface).

Some notable differences that you should be aware of:

* Adding/Getting items
  * Java's HashMap has the `put` and `get` methods for setting/getting items
     * `myMap.put(key, value)`
     * `MyObject value = myMap.get(key)`
  * C#'s Dictionary uses `[]` indexing for setting/getting items
     * `myDictionary[key] = value`
     * `MyObject value = myDictionary[key]`
* `null` keys
  * Java's `HashMap` allows null keys
  * .NET's `Dictionary` throws an `ArgumentNullException` if you try to add a null key
* Adding a duplicate key
  * Java's `HashMap` will replace the existing value with the new one.
  * .NET's `Dictionary` will replace the existing value with the new one if you use `[]` indexing.  If you use the `Add` method, it will instead throw an `ArgumentException`.
* Attempting to get a non-existent key
  * Java's `HashMap` will return null.
  * .NET's `Dictionary` will throw a `KeyNotFoundException`.  You can use the [`TryGetValue`][3] method instead of the `[]` indexing to avoid this:  
     `MyObject value = null;
      if (!myDictionary.TryGetValue(key, out value)) { /* key doesn't exist */ }`

`Dictionary`'s has a [`ContainsKey`][4] method that can help deal with the previous two problems.


  [1]: https://docs.microsoft.com/en-us/dotnet/api/system.collections.generic.dictionary-2
  [2]: https://docs.microsoft.com/en-us/dotnet/api/system.collections.generic.idictionary-2
  [3]: https://docs.microsoft.com/en-us/dotnet/api/system.collections.generic.dictionary-2.trygetvalue
  [4]: https://docs.microsoft.com/en-us/dotnet/api/system.collections.generic.dictionary-2.containskey