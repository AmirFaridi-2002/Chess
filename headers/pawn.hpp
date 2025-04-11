#ifndef PAWN_HPP
#define PAWN_HPP

#include "definitions.hpp"
#include "piece.hpp"

class Pawn : public Piece {
public:
  Pawn(Position pos, PieceColor color);

  virtual bool isValidMove(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                           Position target);
  virtual vector<Move> getMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);
};

#endif
