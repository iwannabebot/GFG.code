## HashSet

A <code>HashSet<T></code> is an unordered collection of the unique elements. It comes under System.Collections.Generic namespace. It is used in a situation where we want to prevent duplicates from being inserted in the collection. As far as performance is concerned, it is better in comparison to the list.

#### Characteristics of HashSet Class:

The <code>HashSet<T></code> class provides high-performance set operations. A set is a collection that contains no duplicate elements, and whose elements are in no particular order.
The capacity of a <code>HashSet<T></code> object is the number of elements that the object can hold.
A <code>HashSet<T></code> object’s capacity automatically increases as elements are added to the object.
A <code>HashSet<T></code> collection is not sorted and cannot contain duplicate elements.
<code>HashSet<T></code> provides many mathematical set operations, such as set addition (unions) and set subtraction.

|METHOD|DESCRIPTION|
|---|---|
|<code>Add(T)<code>|Adds the specified element to a set.|
|<code>Clear()<code>|Removes all elements from a HashSet object.|
|<code>Contains(T)<code>|Determines whether a HashSet object contains the specified element.|
|<code>CopyTo()<code>|Copies the elements of a HashSet collection to an array.|
|<code>CreateSetComparer()<code>|Returns an IEqualityComparer object that can be used for equality testing of a HashSet object.|
|<code>Equals(Object)<code>|Determines whether the specified object is equal to the current object.|
|<code>ExceptWith(IEnumerable)<code>|Removes all elements in the specified collection from the current HashSet object.|
|<code>GetEnumerator()<code>|Returns an enumerator that iterates through a HashSet object.|
|<code>GetHashCode()<code>|Serves as the default hash function.|
|<code>GetObjectData(SerializationInfo, StreamingContext)<code>|Implements the ISerializable interface and returns the data needed to serialize a HashSet object.|
|<code>GetType()<code>|Gets the Type of the current instance.|
|<code>IntersectWith(IEnumerable)<code>|Modifies the current HashSet object to contain only elements that are present in that object and in the specified collection.|
|<code>IsProperSubsetOf(IEnumerable)<code>|Determines whether a HashSet object is a proper subset of the specified collection.|
|<code>IsProperSupersetOf(IEnumerable)<code>|Determines whether a HashSet object is a proper superset of the specified collection.|
|<code>IsSubsetOf(IEnumerable)<code>|Determines whether a HashSet object is a subset of the specified collection.|
|<code>IsSupersetOf(IEnumerable)<code>|Determines whether a HashSet object is a superset of the specified collection.|
|<code>MemberwiseClone()<code>|Creates a shallow copy of the current Object.|
|<code>OnDeserialization(Object)<code>|Implements the ISerializable interface and raises the deserialization event when the deserialization is complete.|
|<code>Overlaps(IEnumerable)<code>|Determines whether the current HashSet object and a specified collection share common elements.|
|<code>Remove(T)<code>|Removes the specified element from a HashSet object.|
|<code>RemoveWhere(Predicate)<code>|Removes all elements that match the conditions defined by the specified predicate from a HashSet collection.|
|<code>SetEquals(IEnumerable)<code>|Determines whether a HashSet object and the specified collection contain the same elements.|
|<code>SymmetricExceptWith(IEnumerable)<code>|Modifies the current HashSet object to contain only elements that are present either in that object or in the specified collection, but not both.|
|<code>ToString()<code>|Returns a string that represents the current object.|
|<code>TrimExcess()<code>|Sets the capacity of a HashSet object to the actual number of elements it contains, rounded up to a nearby, implementation-specific value.|
|<code>TryGetValue(T, T)<code>|Searches the set for a given value and returns the equal value it finds, if any.|
|<code>UnionWith(IEnumerable)<code>|Modifies the current HashSet object to contain all elements that are present in itself, the specified collection, or both.|