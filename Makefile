SFML_DIR = ./SFML-3.1.0
SFML_INC = -I$(SFML_DIR)/include
SFML_LIB = -L$(SFML_DIR)/lib -lsfml-graphics -lsfml-window -lsfml-system
INCLUDES = -I./libs/point -I./libs/apple -I./libs/board -I./libs/direction -I./libs/snake -I./libs/painter

all: libs SnakeGame

libs: libpoint.a libapple.a libboard.a libdirection.a libsnake.a libpainter.a

libpoint.a:
	g++ libs/point/point.cpp -o libs/point/point.o -c -std=c++17 $(INCLUDES)
	ar rcs libpoint.a libs/point/point.o

libapple.a:
	g++ libs/apple/apple.cpp -o libs/apple/apple.o -c -std=c++17 $(INCLUDES)
	ar rcs libapple.a libs/apple/apple.o

libboard.a:
	g++ libs/board/board.cpp -o libs/board/board.o -c -std=c++17 $(INCLUDES)
	ar rcs libboard.a libs/board/board.o

libdirection.a:
	g++ libs/direction/direction.cpp -o libs/direction/direction.o -c -std=c++17 $(INCLUDES)
	ar rcs libdirection.a libs/direction/direction.o

libsnake.a:
	g++ libs/snake/snake.cpp -o libs/snake/snake.o -c -std=c++17 $(INCLUDES)
	ar rcs libsnake.a libs/snake/snake.o

libpainter.a:
	g++ libs/painter/painter.cpp -o libs/painter/painter.o -c -std=c++17 $(INCLUDES) $(SFML_INC)
	ar rcs libpainter.a libs/painter/painter.o

game_engine.o:
	g++ game_engine.cpp -o game_engine.o -c -std=c++17 $(INCLUDES) $(SFML_INC)

main.o:
	g++ main.cpp -o main.o -c -std=c++17 $(INCLUDES) $(SFML_INC)

SnakeGame: libs game_engine.o main.o
	g++ -o Snake.exe game_engine.o main.o -L. -lapple -lboard -lsnake -lpainter -lpoint -ldirection $(SFML_LIB) -std=c++17

clean:
	rm -f *.o *.exe *.a libs/*/*.o