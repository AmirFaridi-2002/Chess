#ifndef DEFINITIONS_HPP
#define DEFINITIONS_HPP

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace sf;
using namespace std;

const int BOARD_SIZE = 8;

struct Position {
  int x;
  int y;
  Position(int x, int y) : x(x), y(y) {}
};

struct Move {
  Position from;
  Position to;
};

enum PieceColor {
  WHITE,
  BLACK,
};

enum PieceType {
  KING,
  KNIGHT,
  BISHOP,
  PAWN,
  QUEEN,
  ROOK,
  NLL,
};

struct ID {
  PieceColor color;
  PieceType type;
  int int_id;
};

inline bool isValidPos(int x, int y) {
  return (x >= 0 && x < BOARD_SIZE && y >= 0 && y < BOARD_SIZE);
}

#endif
