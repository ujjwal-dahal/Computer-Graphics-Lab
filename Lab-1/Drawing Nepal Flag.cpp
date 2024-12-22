#include <graphics.h>
#include <stdio.h>

void drawNepalFlagLineStructure() {
    // Set the line color to blue
    setcolor(BLUE);
    setlinestyle(SOLID_LINE, 0, 3); // Line thickness = 2

    // Draw the outer lines of the upper triangle
    line(200, 50, 350, 150); // Right diagonal
    line(200, 50, 200, 150); // Vertical line
    line(200, 150, 350, 150); // Bottom diagonal

    // Draw the outer lines of the lower triangle
    line(200, 150, 350, 400); // Right diagonal
    line(200, 150, 200, 500); // Vertical line
    line(200, 400, 350, 400); // Bottom diagonal

}

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, (char*)"");

    // Draw the Nepal flag line structure
    drawNepalFlagLineStructure();

    // Wait for user input
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}

