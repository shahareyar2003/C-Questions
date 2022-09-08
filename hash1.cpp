/*  1.    Linear Probing: 
Let hash(x) be the slot index computed using a hash function and S be the table size,then:-
    1.  If slot hash(x) % S is full, then we try (hash(x) + 1) % S
    2.  If (hash(x) + 1) % S is also full, then we try (hash(x) + 2) % S
    3.  If (hash(x) + 2) % S is also full, then we try (hash(x) + 3) % S 

Challenges in Linear Probing :
1.  Primary Clustering: One of the problems with linear probing is Primary clustering, many consecutive elements form groups and it starts taking time to find a free slot or to search for an element.  
2.  Secondary Clustering: Secondary clustering is less severe, two records only have the same collision chain (Probe Sequence) if their initial position is the same

2.  Quadratic Probing (mid-square method):
Quadratic probing is a method with the help of which we can solve the problem of clustering.
We always start from the original hash location. If only the location is occupied then we check the other slots.

let hash(x) be the slot index computed using hash function.  
    1.  If slot hash(x) % S is full, then we try (hash(x) + 1*1) % S
    2.  If (hash(x) + 1*1) % S is also full, then we try (hash(x) + 2*2) % S
    3.  If (hash(x) + 2*2) % S is also full, then we try (hash(x) + 3*3) % S
*/