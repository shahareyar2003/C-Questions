/*  Double hashing uses the idea of applying a second hash function to key when a collision occurs.

Advantages of Double hashing:-
    1. The advantage of Double hashing is that it is one of the best form of probing, producing a uniform distribution of records throughout a hash table.

    2. This technique does not yield any clusters.
    3. It is one of effective method for resolving collisions.

Double hashing can be done using : 
(hash1(key)  + i * hash2(key)) % TABLE_SIZE 
Here hash1() and hash2() are hash functions and TABLE_SIZE is size of hash table. 
(We repeat by increasing i when collision occurs)
*/