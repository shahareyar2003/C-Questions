/*  Standard Template Library (STL):-
An STL is a library of generic functions and classes which saves you time and energy which you would have spent constructing for your use. This helps you reuse these well tested classes and functions umpteenth number of times according to your own convenience. 

COMPONENTS OF STL:
    1. Containers:- Container is an object which stores data. 
    2. Algorithm:- Algorithms are a set of instructions which manipulates the input data to arrive at some desired result. 
    3. Iterators:- Iterators are objects which refer to an element in a container. And we handle them very much similarly to a pointer. Their basic job is to connect algorithms to the container and play a vital role in manipulation of the data.  

STL = Containers + Algorithms + Iterators

Containers, objects which store data, Algorithms, set of procedures to process data, and Iterators, objects which point to some element in a container. 

Containers are themselves of three types:
1. Sequence Containers
2. Associative Containers
3. Derived Containers

1. A sequence container stores that data in a linear fashion. Sequence containers include Vector, List, Dequeue etc.

2. An associative container is designed in such a way that enhances the accessing of some element in that container. Some of these containers are, Set, Multiset, Map, Multimap etc.  They store their data in a tree-like structure.

3. Derived Containers As the name suggests, these containers are derived from either the sequence or the associative containers. Some examples of derived containers are Stack, Queue, Priority Queue, etc.


--> Vectors, which has following properties:
Faster random access to elements in comparison to array
Slower insertion and deletion at some random position, except at the end.
Faster insertion at the end.


-->In Lists, we have,
Random accessing elements is too slow, because every element is traversed using pointers.
Insertion and deletion at any position is relatively faster, because they only use pointers, which can easily be manipulated

In associative containers, every operation except random access is faster in comparison to any other containers, be it inserting or deleting any element.
*/