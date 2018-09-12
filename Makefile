all: PlayList.h PlayList.cpp Song.h Song.cpp SetInterface.h Set.h Set.cpp project_tester.cpp
	g++ -o playList PlayList.cpp Song.cpp project_tester.cpp
