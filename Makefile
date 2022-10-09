NAME = deneme
CC = gcc
CLAFGS = -Werror -Wextra -Wall
SRC = *.c
OBJ = $(SRC:.c=.o)

erdem: erdem1 deneme

deneme: erdem2

erdem1: erdem2
	@echo "a"

erdem2:
	@echo deneme;
