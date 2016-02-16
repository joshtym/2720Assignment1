CFLAGS = -I /home/lib2720/allegro5/include/
LIBDIR = /home/lib2720/allegro5/lib
LNFLAGS = -lallegro -lallegro_primitives -ldl # -lcppunit
OBJECTS = Display.o Circle.o Square.o Triangle.o Shape.o ShapeContainer.o Vector.o main.o

drawCircle: $(OBJECTS)
	g++ -L $(LIBDIR) -o $@ $^ $(LNFLAGS) 

%.o : %.cc
	g++ $(CFLAGS) -c $^

clean:
	rm -f *.o *~ *% *# .#*

clean-all: clean
	rm -f drawCircle
