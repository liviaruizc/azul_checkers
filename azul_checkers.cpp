// azul_checkers.cpp
// Livia Correia
// Code to make Azul drop caps in alternated squares till he reaches the end for any size of world.
// -------------------------------------------------------------------


#include <Azul.h>

// #include "../cmake-build-debug/_deps/sfml-src/extlibs/headers/glad/include/glad/gl.h"
// #include "../cmake-build-debug/_deps/sfml-src/src/SFML/Window/Win32/CursorImpl.hpp"

// function declarations
// -------------------------------------------------------------------

void turnRight (fgcu::Azul & azul);
void placeCap (fgcu::Azul & azul, int columns, int row);

// functions definitions
// ----------------------------------------------------------------------


int main()
{
    // Azul instance variable "azul"
    fgcu::Azul azul{fgcu::Azul::AzulExercise::Default, 10, 10};

    // Declaring row and columns for alternating pattern
    int row = 0;
    int columns = 0;
    bool evenSquare = ((columns + row) % 2 == 0);

    while (!azul.isBorderWall()) { // Condition to stop Azul when reaching the end


        while (azul.canMoveForward()) { // Making Azul move to end of row
            if (evenSquare) {
                placeCap(azul,columns, row); // Checking for alternating pattern
            }
            azul.moveForward();
            columns ++;
        }

        // Turning right and moving to next row
        if (evenSquare) {
            placeCap(azul, columns, row);
        }
        turnRight(azul);
        azul.moveForward();
        turnRight(azul);

        // Adding number of rows by one
        row++;

        // Moving to end of row
        while (azul.canMoveForward()) {
            if (evenSquare) {
                placeCap(azul, columns, row);
            }
            azul.moveForward();
            columns++;
        }

        // Turning left and moving to next row
        azul.turnLeft();
        azul.moveForward();
        azul.turnLeft();

        row++; // Adding number of rows by one
    }


    // End of loop

    azul.stop(); // have azul stop here to keep the window open

} // end main

/**
 * Turning Azul to face right by turning to the left 3 times
 * @param azul - Azul class instance
*/

void turnRight (fgcu::Azul & azul) {
    for(int i=0; i < 3; ++i)
        azul.turnLeft();
} // end turnRight

/**
 * Placing a cap when number of spaces is even
 * @param azul - Azul class instance
*/

void placeCap (fgcu::Azul & azul, int columns, int row) {
    if ((columns + row) % 2 == 0) {
        azul.putDownCap();
    }
}





