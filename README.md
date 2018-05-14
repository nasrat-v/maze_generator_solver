# maze_generator_solver
### - Kruskal maze generator
### - Backtracking maze solver

# Generator
The generator is a randomized kruskal algorithm.
The output is provided in ascii on the terminal.
To save the result you have to redirect the output in a file.
You can generate perfect and imperfect maze.

The * character represent empty fields.
The X character represent walls.
A maze always start with a * in top left and always finish with a * in bottom right.

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
 
    ./generator [WIDTH] [HEIGHT] parfait
    
For imperfect maze:

    ./generator [WIDTH] [HEIGHT] imparfait
    
    
by default this command generate perfect maze too:

    ./generator [WIDTH] [HEIGHT]
    
Redirect the result in a file to save it:

    ./generator [WIDTH] [HEIGHT] parfait > perfect_maze.map
    
# Solver
The solver is a backtracking algorithm.

Ncurses library is used to display the output in slow motion.
You can choose the speed (in milliseconds) of the slow motion with the Macro UTIME_TO_WAIT in solver.h file.

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
