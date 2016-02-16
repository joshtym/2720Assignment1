#ifndef __VECTOR_H
#define __VECTOR_H

class Vector
{
	private:
		double x, y;
	public:
		Vector() : x(0), y(0) {}
		Vector(double userX) : x(userX), y(0) {}
		Vector(double userX, double userY) : x(userX), y(userY) {}
		double getX() const;
		double getY() const;
		void setX(double);
		void setY(double);
};
#endif
