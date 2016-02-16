// Program Information
/*
 * Course: CPSC2720 Spring 2014
 * Name: Josh Tymburski
 * Assignment #1
 * Shape Class Interface
 * Professor: Robert  Benkoczi
 * Program Name: Shape.h
 * Software Used: Geany
*/
#ifndef __SHAPE_H
#define __SHAPE_H

#include "Vector.h"

/// Class that handles all coordinate points
/**
 * Class initializes values based on how many values are given in
 * two dimensions. The data is value but the appropiate setters
 * and getters are provided.
*/ 
class Point
{
	private:
		double x, y;
	public:
	
		/// Main Constructors
		/**
		 * Constructors are provided for the three possibilities. If
		 * no value is given, then the values default to 0, 0. If one
		 * value is given, it is assumed that it is an x value and so
		 * the y defaults to 0. If both values are given, then both
		 * values are set accordingly
		**/
		Point() : x(0), y(0) {}
		Point(double userX) : x(userX), y(0) {}
		Point(double userX, double userY) : x(userX), y(userY) {}
		
		/// Getter Functions
		/**
		 * Returns a constant to the value of the current value stored
		 * in the x and y planes
		**/
		/// Gets the X value
		double getX() const;
		
		/// Gets the Y value
		double getY() const;
		
		/// Setter Functions
		/**
		 * Allows for setting of the values of x and y in the
		 * point object
		**/
		/// Sets the X value
		void setX(double);
		
		/// Sets the Y value
		void setY(double);
		
		/// Rotate Function
		/**
		 * This function allows one point to be altered around a 
		 * central point allowing for different positions in a circular
		 * position around the original point.
		**/
		void rotate(const Point&, Point&, double, double);
};

/// Main Parent Class of all Shapes
/**
 * This class acts as a "template" for all other derived shapes
 * to follow. Contains the similarities between all shapes and
 * contains an overridable draw function. The draw function must be
 * overrided to be used
**/
class Shape
{
	public:
		/// Virtual Functions
		/**
		 * Two functions provided. The translate function is based on
		 * the fact that all shapes have a central "origin" that
		 * is based on how they move. The draw function is what is
		 * classified as "purely virtual" which means that is must
		 * be overriden by it's children to be used
		**/
		virtual void translate(Vector&);
		virtual void draw(double, double) = 0;
		
		// Central point for each shape
		Point origin;
};
#endif
