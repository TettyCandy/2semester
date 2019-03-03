.PHONY: compilation

compilation: main.cpp lib.h
		g++ main.cpp lib.h -oMyLib -O2 -Wall -Wextra