#ifndef PIECE_H
#define PIECE_H

#include "./definitions.hpp"

class Piece {
  friend ostream &operator<<(ostream &stream, const Piece &piece);

private:
  const PieceColor color;
  const PieceType type;
  Position position;
  Sprite sprite;

public:
  virtual ~Piece();
  Piece();
  Piece(PieceColor color, PieceType type);
  Piece(int i, int j, PieceColor color, PieceType type);

  virtual Position *moves(Piece board[BORAD_SIZE][BORAD_SIZE]);
  virtual bool validTake(int i, int j);
  virtual bool valideMove(int i, int j);
  virtual void setPosition(Position pos);

  void loadTexture();
  void loadSound();
  void moveSprite(int, int);
  void playKillSound();

  bool validPosition(int i, int j);
  Position getPosition();
  char getColor();
  string getName();
  Sprite getSprite();
  Vector2f generateCellPosition(int i, int j);
};

#endif
