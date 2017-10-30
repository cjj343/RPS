CXX = g++
CXXFLAGS =  -std=c++11
CXXFLAGS +=   -Wall
CXXFLAGS +=   -pedantic-errors

OBJS =  Tool.o Scissors.o RPSGame.o Rock.o Paper.o Menu.o Helper.o play_game.o
SRCS =  Tool.cpp Scissors.cpp RPSGame.cpp Rock.cpp Paper.cpp Menu.cpp Helper.cpp play_game.cpp
HEADERS = Tool.hpp Scissors.hpp RPSGame.hpp Rock.hpp Paper.hpp Menu.hpp Helper.hpp

vector: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o rps

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o rps
