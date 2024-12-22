#include <graphics.h> // For graphics functions
#include <stdio.h>    // For input-output functions
#include <stdlib.h>   // For standard functions
#include <math.h>     // For mathematical functions

int main() {
    int gd = DETECT, gm; // Graphics driver and mode

    // Initialize the graphics mode
    initgraph(&gd, &gm, (char*)"");

    // Variables for line endpoints
    float x1, y1, x2, y2;

    // Prompt user to enter coordinates
    printf("Enter X1, Y1, X2, Y2: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    // Calculate the differences in x and y
    float dx = x2 - x1;
    float dy = y2 - y1;

    // Steps needed for plotting
    float steps;

    // Determine the number of steps required
    if (fabs(dx) > fabs(dy)) {
        steps = fabs(dx);
    } else {
        steps = fabs(dy);
    }

    // Calculate the increment values for x and y
    float x_inc = dx / steps;
    float y_inc = dy / steps;

    // Plot the points
    int i;
    for (i = 0; i <= steps; i++) {
        // Plot a pixel at the current (x1, y1) position
        putpixel(round(x1), round(y1), YELLOW);

        // Delay for visualization
        delay(50);

        // Increment x1 and y1
        x1 += x_inc;
        y1 += y_inc;
    }

    // Wait for user input
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}

