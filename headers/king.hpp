#ifndef KING_HPP
#define KING_HPP

#include "definitions.hpp"
#include "piece.hpp"

class King : public Piece {
public:
  King(Position pos, PieceColor color);
  virtual bool isValidMove(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                           Position target);
  virtual vector<Move> getMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);
};

#endif
