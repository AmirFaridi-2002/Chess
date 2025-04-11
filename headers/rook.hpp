#ifndef ROOK_HPP
#define ROOK_HPP

#include "definitions.hpp"
#include "piece.hpp"

class Rook : public Piece {
public:
  Rook(Position pos, PieceColor color);

  virtual bool isValidMove(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                           Position target);
  virtual vector<Move> getMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);
};

#endif
