// Program Information
/*
 * Course: CPSC2720 Spring 2014
 * Name: Josh Tymburski
 * Assignment #1
 * Shape Class Implementation
 * Professor: Robert  Benkoczi
 * Program Name: Square.cc
 * Software Used: Geany
*/
#include "Square.h"
#include <allegro5/allegro_primitives.h>

/// Class Implementation
/**
 * Impelmentation which defines all methods prototyped in the class
 * interface
**/

Square::Square(double halfSideLength, double originx,
			   double originy)
{
	// Assign given values to the appropiate sections
	origin.setX(originx);
	origin.setY(originy);
	sideLength = 2*halfSideLength;
}

void Square::draw(double originx, double originy)
{
	// Use allegro's draw function to draw the shape into the buffer
	al_draw_rectangle(originx - sideLength/2, originy - sideLength/2,
	                  originx + sideLength/2, originy + sideLength/2, 
	                  al_map_rgb(49,94,199), 4);
}
