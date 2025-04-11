#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "definitions.hpp"
#include "piece.hpp"

class Bishop : public Piece {
public:
  Bishop(Position pos, PieceColor color);

  virtual bool isValidMove(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                           Position target);
  virtual vector<Move> getMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);
};

#endif
