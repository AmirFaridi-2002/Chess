#ifndef DEFINITIONS_HPP
#define DEFINITIONS_HPP

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using namespace sf;
using namespace std;

const int BORAD_SIZE = 8;

struct Position {
  int x;
  int y;

  Position(int x, int y) : x(x), y(y) {}
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

#endif
