# maze_generator_solver
### - Kruskal maze generator

##### Time without display:
![alt text](https://raw.githubusercontent.com/nasrat-v/maze_generator_solver/master/img/create_time_250x250.png)

### - Backtracking maze solver

##### Time without display:
For perfect 250x250 it's instantanly solve.

# Generator
The generator is a randomized kruskal algorithm.
The output is provided in ascii on the terminal.
To save the result you have to redirect the output in a file.
You can generate perfect and imperfect maze.

The * character represent empty fields.
The X character represent walls.
A maze always start with a * in top left and is always solvable.

## Result for generation of perfect 50x50 maze:

![alt text](https://raw.githubusercontent.com/nasrat-v/maze_generator_solver/master/img/generation_perfect_50x50.png)

## Result for generation of imperfect 50x50 maze:

![alt text](https://raw.githubusercontent.com/nasrat-v/maze_generator_solver/master/img/generation_imperfect_50x50.png)

## Compile
compiling:
    
    make
    
cleaning obj files:

    make clean
    
cleaning binary files:

    make fclean
    
    
cleaning all and compile:

    make re
    
## How to use it
For perfect maze:
 
    ./generator [WIDTH] [HEIGHT] perfect
    
For imperfect maze:

    ./generator [WIDTH] [HEIGHT] imperfect
    
Redirect the result in a file to save it:

    ./generator [WIDTH] [HEIGHT] perfect > perfect_maze.map
    
# Solver
The solver is a backtracking algorithm.

Ncurses library is used to display the output in slow motion.
You can choose the speed (in milliseconds) of the slow motion with the Macro UTIME_TO_WAIT in solver.h file.

The walls are in blue and the empty fieds are in black.
The bad way travelled by the algorithm is in yellow. The good one is in red.

## Result for solving perfect 50x50 maze:

![alt text](https://raw.githubusercontent.com/nasrat-v/maze_generator_solver/master/img/solve_perfect_50x50.png)

## Compile
compiling:
    
    make
    
cleaning obj files:

    make clean
    
cleaning binary files:

    make fclean
    
    
cleaning all and compile:

    make re
    
## How to use it
Execute binarys' solver with the maze map in parameter:

    ./solver perfect_maze.map

To test the solution you have examples of perfect and imperfect labyrinths in the "mazes" folder.
