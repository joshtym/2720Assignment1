// Program Information
/*
 * Course: CPSC2720 Spring 2014
 * Name: Josh Tymburski
 * Assignment #1
 * Main Program
 * Professor: Robert  Benkoczi
 * Program Name: main.cc
 * Software Used: Geany
*/
#include "Display.h"
#include "ShapeContainer.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <allegro5/allegro_primitives.h>

/// Function Prototype: drawDisplay
/**
 * Purpose: Simple function to display the contents drawn
 *          by Allegro
**/
void drawDisplay(ShapeContainer&);

int main(void)
{
	// Make the rand function truly random
	srand(time(0));
	
	ShapeContainer shapes;
	
	// Insert the appropiate shapes
	shapes.insert("circle", 200, 400, 300);
	shapes.insert("square", 200, 400, 300);
	shapes.insert("triangle", 200, 400, 300);
	
	// Call to display the images to screen
	drawDisplay(shapes);
	
	// Randomly translate all shapes
	shapes.randomTranslate();
	
	// Redraw new translated images
	drawDisplay(shapes);
}

/// Function definition
void drawDisplay(ShapeContainer& shapes)
{
	// Create a 800x600 window
	Display disp;
	
	// Draw the shapes
	shapes.draw();
	
	// Display the shapes
	al_flip_display();
	
	// Keep the display up for 4 seconds
	al_rest(4.0);
}
