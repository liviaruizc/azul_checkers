# Azul

This repository provides a template C++ application for building Azul exercises.
# Azul Checkers Cap Placement

This project involves programming **Azul**, the mascot, to traverse through a grid and place caps on alternating squares, creating a checkerboard-like pattern. The movement continues until Azul reaches the edge of the grid, at which point the program stops. The grid size is adjustable, and the program supports both horizontal and vertical movements.

## Features

- **Grid Navigation**: Azul moves across the grid, row by row, placing caps on alternating squares.
- **Alternating Pattern**: Caps are placed only on even-numbered squares (based on row and column indices).
- **Flexible Grid Size**: The program is adaptable to different grid sizes, and it handles both small and large grids effectively.
- **Movement Control**: Azul turns right to move to the next row and continues the checkerboard pattern.

## Technologies Used

- **C++**: The core programming language used for this project.
- **Azul API**: Utilized the **Azul** mascot API to control movement, cap placement, and grid traversal.
- **SFML (Simple and Fast Multimedia Library)**: Used for handling graphics and window management (if applicable).

## How to Run the Program

1. Clone this repository to your local machine:
   ```bash
   git clone <repository-url>

## Compile and run the azul_checkers.cpp file:

g++ azul_checkers.cpp -o azul_checkers -lsfml-graphics -lsfml-window -lsfml-system
./azul_checkers
Ensure that you have the required libraries installed, especially SFML.

The program will run Azul through the grid and start placing caps in the checkerboard pattern.

## Functionality
## Main Logic
Movement: Azul moves forward row by row, turns at the end of each row, and places caps on alternating squares based on the sum of the row and column indices.

Cap Placement: The program checks whether the sum of the row and column indices is even. If it is, Azul places a cap on the current square.

## Functions
turnRight(): Makes Azul turn right by rotating 270 degrees (turning left 3 times).

placeCap(): Places a cap on a square if the sum of the current row and column is even.

## Sample Output
The program will display a grid (in a graphical window) where Azul places caps on alternating squares, starting from the top-left corner and moving to the right and down until the grid's edge is reached.

## License

The source code is dual licensed under Public Domain and MIT -- choose whichever you prefer.
