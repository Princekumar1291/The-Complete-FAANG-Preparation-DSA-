//Use PW




//Root Node
//Children
//Parent Node
//Sibling Node
//Leaf Node--Having No child
//Internal Node -Not in boundry
//Ancestor --> Path from root to that Node
// Descendant Node --> all Node below that Node
//Level
//size --> Number of Nodes
//edges --> size-1 (is that joing two node)
// Height --> level-1

//Traversing a tree
  // 1)DFS 
  // 2)BFS

// Important properties of trees 
  // .It has no loop and no circuit
  // .It has no self loop



//Generic tree --> multiple children
//Binary tree  --> max two children(0,1,2)
//Binary search tree-> node to left is all smaller and node to the right is larger
//AVL tree--> balanced BST



//Binary Tree Types
//01) Full BT-->every node have either 0 or 2 children
    //     1
    //    / \
    //   2   3
    //  / \
    // 4   5

//02) Perfect BT--> every node has 0 or 2 children and all leaf node are at same level
    //     1        Not this      1   
    //    / \                    / \
    //   2   3                  2   3
    //  / \ / \                / \ /
    // 4  5 6  7              4  5 6

//03) Complete BT--> all levels are completly filed except the last level but last level is start filling with left most
    //      1     but not this    1
    //     / \                   / \
    //    2   3                 2   3
    //   / \  /                /   / \
    //  4   5 6               4   5   6
    //                            \
    //                             7

//04) Balanced BT--> height of tree at max log(n) where n is number of nodes
                   //In a balanced binary tree, the height of the tree is balanced such that the difference in height between the left and right subtrees of any node is at most one.
      
 
//05) Degenerate and skewed BT-->A degenerate binary tree (or pathological tree) is a type of binary tree where each parent node has only one child. This tree essentially behaves like a linked list because every node only points to one other node.
    // 1
    //  \
    //   2
    //    \
    //     3
    //      \
    //       4



