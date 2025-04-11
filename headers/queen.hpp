#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "definitions.hpp"
#include "piece.hpp"

class Queen : public Piece {
public:
  Queen(Position pos, PieceColor color);

  virtual bool isValidMove(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                           Position target);
  virtual vector<Move> getMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);
};

#endif
