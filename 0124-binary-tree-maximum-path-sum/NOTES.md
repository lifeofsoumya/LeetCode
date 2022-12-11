Alternative:
​
The way to think of a solution to this is that when we are looking a path in a tree its unidirectional and cannot retrace back what i mean by that is:
_
/ 1 \
/ / \ \ <-----path that goes like a depth first search without backtracking
/ 2   3 v
​
So a way to solve this is that if i am at a node i can choose a left or right subtree but if i choose both this is the only subtree that will contain my maximum
​
I first set my max_sum to INT_MIN.
I can do either either of the options presented:
1.I can choose to take up the left subtree or drop it.
2.I can either choose to take up the right subtree or drop it.
3.I check for a possibility whether if i were to take both left subtree and right subtree would that beat my current max_sum?
Lets consider
-10
/ \
9  20
/  \
15   7
I do my postorder traversal with a bit of variation:-
​
int l=max(max_gain(root->left),0);
int r=max(max_gain(root->right),0);
But why?
This is because I have the option to choose the left or right subtree or whether i will just settle with my root value.
​
So I do my regular postorder traversal and do the above steps
I hit 9