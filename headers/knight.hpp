#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "definitions.hpp"
#include "piece.hpp"

class Knight : public Piece {
public:
  Knight(Position pos, PieceColor color);

  virtual bool isValidMove(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                           Position target);
  virtual vector<Move> getMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);
};

#endif
