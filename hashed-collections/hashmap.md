## Dictionary (HashMap)


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