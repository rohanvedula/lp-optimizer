# lp-optimizer
## Description
`lp-optimizer` is a basic linear program optimizer that finds the optimal value for standard form linear programs (LP). The optimizer leverages the Simplex algorithm for finding the optimal solution to an LP. 

## Usage
First line of input, `n` are the number of variables in the program and the next is `m` the number of equations required. The next `n` inputs are the values of the objective function (i.e. the value of each of the variables we are attempting to optimize). The next input, `z` is the constant associated with the objective function (default value 0, new line skips this input). 

Next, we need to input linear equations we want to optimize. We accept `m` more lines of input where each line is of `n+1` length with the first `n` numbers being the constant associated with each variable and the last number being the solution to the equation. 

## Structure

## Optimizations
This project is a work in progress, more optimizations to come. 