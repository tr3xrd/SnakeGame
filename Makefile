all: SnakeGame

SnakeGame: apple.o board.o direction.o game_engine.o painter.o point.o snake.o main.o
	g++ -o Snake.exe apple.o board.o direction.o game_engine.o painter.o point.o snake.o main.o -std=c++17

apple.o:
	g++ apple.cpp -o apple.o -c -std=c++17

board.o:
	g++ board.cpp -o board.o -c -std=c++17

direction.o:
	g++ direction.cpp -o direction.o -c -std=c++17

game_engine.o:
	g++ game_engine.cpp -o game_engine.o -c -std=c++17

painter.o:
	g++ painter.cpp -o painter.o -c -std=c++17

point.o:
	g++ point.cpp -o point.o -c -std=c++17

snake.o:
	g++ snake.cpp -o snake.o -c -std=c++17

main.o:
	g++ main.cpp -o main.o -c -std=c++17

clean:
	rm -f *.o *.exe