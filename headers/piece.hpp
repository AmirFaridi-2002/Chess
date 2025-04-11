#ifndef PIECE_HPP
#define PIECE_HPP

#include "definitions.hpp"

class Piece {
public:
  PieceType type;
  PieceColor color;
  ID id;
  Position pos;

  Piece(Position pos, PieceColor color, PieceType type);

  bool checkHorizontal(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                       Position target);
  bool checkVartical(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                     Position target);
  bool checkDiagonal(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                     Position target);

  vector<Move> getHorizontalMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);
  vector<Move> getVerticalMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);
  vector<Move> getDiagonalMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);

  virtual bool isValidMove(const Piece *board[BOARD_SIZE][BOARD_SIZE],
                           Position target);
  virtual vector<Move> getMoves(const Piece *board[BOARD_SIZE][BOARD_SIZE]);
};

#endif
