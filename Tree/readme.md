# Tree

## Number of Binary Trees

### Unlablled Nodes

- Formula to find the number of different Binary Trees can be generated for N number of Nodes (Catalan Number).

> $T(n) =$ ${2n}_{C_{\substack{n}}}/n+1$
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
