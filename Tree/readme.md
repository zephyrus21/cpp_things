# Tree

## Number of Binary Trees

### Unlablled Nodes

- Formula to find the number of different Binary Trees can be generated for N number of Nodes (Catalan Number).

> T(n) = 2nCn / n + 1
>
> $T(n) =$ ${2n}_{C_{\substack{n}}}/n+1$
>
> T(n) = ∑n i=1 T(i-1)T(n-i)
>
> $T(n) =$ $\sum_{i=1}^{n} T(i-1)T(n-i)$

- Formula to find the Max Height of the Binary Tree.

> $2^{n-1}$

### Labelled Nodes

- Formula to find the number of different ways in which labelled Nodes can be arranged in N Binary Trees with N number of Nodes.

> $T(n) =$ $({2n}_{C_{\substack{n}}}/n+1)n!$

----

> Note:  
>
> ${2n}_{C_{\substack{n}}}/n+1$ - formula to find the no of shapes
>
> n! - to find the number of ways to fill labelled Nodes

----

## Height and Nodes

### Height given

- Formula to find minimum numbers of nodes in a given height h of a Binary Tree

> $n = h + 1$

- Formula to find maximum numbers of nodes in a given height h of a Binary Tree

> $n =$ $2^{h+1} - 1$

### Nodes given

- Formula to find minimum height in a given no of nodes in a Binary Tree

> $h = log_2(n+1) - 1$

- Formula to find maximum height in a given no of nodes in a Binary Tree

> $h = n - 1$

### Relation between internal node and external node

$deg(0) = deg(2) + 1$
