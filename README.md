# Push_Swap
The Push_Swap project is a 42 school project that requires you to sort a stack of integers using two stacks and a set of operations. The goal is to sort the stack in as few operations as possible.

## How to Use
To use the Push_Swap program, you need to follow these steps:
+ Download or clone the Push_Swap repository from GitHub.
+ Compile the program by running make in the root directory of the repository.
+ Run the program by calling ./push_swap followed by the integers you want to sort, separated by spaces.
+ The program will output a list of operations that can be used to sort the stack.
+ The program uses two stacks, stack A and stack B, to sort the integers. The available operations are:

| Operation | Description |
| ------------ | ------------ |
| `sa` | swap A - swap the first 2 elements at the top of stack A |
| `sb` | swap B - swap the first 2 elements at the top of stack B |
| `ss` | `sa` and `sb` at the same time |
| `pa` | push A - take the first element at the top of b and put it at the top of A |
| `pb` | push B - take the first element at the top of a and put it at the top of B |
| `ra` | rotate A - shift up all elements of stack A by 1. The first element becomes the last one |
| `rb` | rotate B - shift up all elements of stack B by 1. The first element becomes the last one |
| `rr` | `ra` and `rb` at the same time |
| `rra` | reverse rotate A - shift down all elements of stack A by 1. The last element becomes the first one |
| `rrb` | reverse rotate B - shift down all elements of stack B by 1. The last element becomes the first one |
| `rrr` | `rra` and `rrb` at the same time |


## Conclusion
The Push_Swap project is an excellent way to learn about sorting algorithms and data structures. By implementing this program, you will gain experience with stacks, queues, and linked lists. You will also learn about optimization techniques and how to minimize the number of operations required to solve a problem.

<img width: 300, height: 300 src="https://github.com/anolivei/Push_swap42/blob/main/images/push_swap.gif?raw=true"/>
