# Project 0x1D. C - Binary trees

## Resources 

* [Binary tree definition](https://en.wikipedia.org/wiki/Binary_tree)
* [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
* [Data Structure & Algorithms - Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
* [Binary search tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures: Binary Tree(Video)](https://www.youtube.com/watch?v=H5JubkIy_p8)

## Learning Objectives


* **What is a binary tree**: In computer science, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root. Some authors allow the binary tree to be the empty set as well.

From a graph theory perspective, binary (and K-ary) trees as defined here are actually arborescences. A binary tree may thus be also called a bifurcating arborescence —a term which appears in some very old programming books, before the modern computer science terminology prevailed. It is also possible to interpret a binary tree as an undirected, rather than a directed graph, in which case a binary tree is an ordered, rooted tree. Some authors use rooted binary tree instead of binary tree to emphasize the fact that the tree is rooted, but as defined above, a binary tree is always rooted. A binary tree is a special case of an ordered K-ary tree, where k is 2.

In mathematics, what is termed binary tree can vary significantly from author to author. Some use the definition commonly used in computer science, but others define it as every non-leaf having exactly two children and don't necessarily order (as left/right) the children either

* **What is the difference between a binary tree and a Binary Search Tree**: A *binary tree* is a non linear data structure where each node can have at most 2 child nodes.

if a node have 0 child nodes then it is called a leaf node. In the above image {2,5,11,4} are the leaf nodes.

Now, if i ask you to search any node in the above tree what will you do? well, you will search the entire tree until you get the desired node. so,In worst case complexity for searching a node is O(n).

<a href="https://imgbb.com/"><img src="https://i.ibb.co/PNnJMS1/binarytree.png" alt="binarytree" border="0"></a>

*Binary search tree* is a binary tree in which a node have a value greater than all values in its left subtree and smaller than all values in its right subtree.

Now, if a Binary search tree is balanced then you can find a value in O(log n) time.

how O(log n)?

lets say , you want to find 12 .here is what you gonna do.

we will start from the root node which in this case is 15.

    current node is 15, but 12<15 , we go in the left subtree because right subtree has even greater values.
    current node is 10, but 12>10 , we go in the right subtree because left subtree has even smaller values.
    current node is 12. BOOM!

so, from O(n) to O(log n) quite an improvement.

<a href="https://imgbb.com/"><img src="https://i.ibb.co/5GdpXmx/binarysearchtree.png" alt="binarysearchtree" border="0"></a>


* **What is the possible gain in terms of time complexity compared to linked lists**: 
    *Searching*: For searching element 2, we have to traverse all elements (assuming we do breadth first traversal). Therefore, searching in binary tree has worst case complexity of O(n).
    *Insertion*: For inserting element as left child of 2, we have to traverse all elements. Therefore, insertion in binary tree has worst case complexity of O(n).
    *Deletion*: For deletion of element 2, we have to traverse all elements to find 2 (assuming we do breadth first traversal). Therefore, deletion in binary tree has worst case complexity of O(n).

* **What are the depth, the height, the size of a binary tree**: Every node (excluding a root) in a tree is connected by a directed edge from exactly one other node. This node is called a parent. On the other hand, each node can be connected to arbitrary number of nodes, called children. Nodes with no children are called leaves, or external nodes. Nodes which are not leaves are called internal nodes. Nodes with the same parent are called siblings.

More tree terminology:

    *The depth* of a node is the number of edges from the root to the node.
    *The height of a node* is the number of edges from the node to the deepest leaf.
    *The height of a tree* is a height of the root.
    A full binary tree is a binary tree in which each node has exactly zero or two children.
    A complete binary tree is a binary tree, which is completely filled, with the possible exception of the bottom level, which is filled from left to right.

* **What are the different traversal methods to go through a binary tree**:
Traversal is a process to visit all the nodes of a tree and may print their values too. Because, all nodes are connected via edges (links) we always start from the root (head) node. That is, we cannot randomly access a node in a tree. There are three ways which we use to traverse a tree −

    *In-order Traversal*
    *Pre-order Traversal*
    *Post-order Traversal*

Generally, we traverse a tree to search or locate a given item or key in the tree or to print all the values it contains.

* **What is a complete, a full, a perfect, a balanced binary tree:**
In a complete binary tree every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes at the last level h. An alternative definition is a perfect tree whose rightmost leaves (perhaps all) have been removed.

### More Sources:

* [Full binary tree and Complete Binary Tree(video)](https://www.youtube.com/watch?v=bvpiyKo9hnI)
* [Understanding Complete Binary Tree](https://www.youtube.com/watch?v=443rLvgtAdw)
* [Binary Tree and its Types | Data Structures](https://www.youtube.com/watch?v=vvey2QCs98o)
* [Trees and Binary Search Trees](https://www.youtube.com/watch?v=TocJLRkp4dc)


----------------------------------------------------------------------------------------------------------------
# ***Authors***:

* [Karen Campo](https://github.com/KarenCampo777) - [@KarenCa96752258](https://twitter.com/KarenCa96752258)
* [Nathaly Sotomayor Ampudia](https://github.com/nathsotomayor) - [@nathsotomayor](https://twitter.com/nathsotomayor)


