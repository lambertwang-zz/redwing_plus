CC = g++
DEL = del

MAIN = redwing/src/Redwing.cpp
EXE = Redwing.exe

INC = -I ../aviophobia/src/include -I $(SDL_DIR)/include -I redwing/include
LINK = -L$(SDL_DIR)/lib/x64 -lsdl2 \
	-L$(GLEW_DIR)/bin/Release/x64 -lglew32 \
	-lwinmm -lopengl32


ENGINE = ../aviophobia/aviophobia.a

GAMESRC = \
	redwing/src/global/Global.cpp \
	redwing/src/objects/Plane.cpp \

GAMEOBJ = $(GAMESRC:.cpp=.o)

build: $(GAMEOBJ)
	$(CC) $(MAIN) -o $(EXE) $(ENGINE) $(INC) $(LINK) $(GAMEOBJ)
	@echo done

.cpp.o: 
	$(CC) -c $(INC) $< -o $@ $(LINK)

clean:
	$(DEL) $(EXE)
	@echo clean