#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    
    // Initialize the graphics mode
    //Graphical window activate garcha
    initgraph(&gd, &gm, (char*)"");
    
    // Set the drawing color to red
    setcolor(RED);
    
    // Set the line style to thick (line thickness 3)
    setlinestyle(SOLID_LINE, 0, 3);
    
    // Draw a red circle with increased thickness
    circle(200, 100, 100);
    
    // Wait for a key press
    //kunai key press garda Graphical Window banda garcha
    getch();
    
    // Close the graphics mode
    closegraph();
    
    return 0;
}

