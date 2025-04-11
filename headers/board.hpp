#ifndef BOARD_HPP
#define BOARD_HPP

#include "definitions.hpp"
#include "piece.hpp"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Board {
private:
  Piece *boardState[BOARD_SIZE][BOARD_SIZE];

  vector<Piece *> whitePieces;
  vector<Piece *> blackPieces;

  RenderWindow *window;

  PieceColor turn;

  vector<Move> availableMoves;

  struct Action {
    Move move;
    PieceColor color;
    ID id;
  };
  vector<Action> moveHistory;

  bool isPlaying;
  bool restart;

  map<string, Texture> textures;
  Font font;
  Text winner;

  Piece *selectedPiece;

public:
  Board(Piece *initialBoard[BOARD_SIZE][BOARD_SIZE], RenderWindow *_window);

  bool dMode(Move move, PieceColor color, int step);
  bool mMode(Move move, PieceColor color, int step);
  bool isValidMove(Piece *piece, Move move);
  bool isInCheck(PieceColor color);
  bool isCheckmate(PieceColor color);
  bool isInMoves(Position target);

  void addPiece(Piece *piece);
  void movePiece(Piece *piece, Position target, char type = 'N');
  void undo();
  void changeTurn();

  Piece *getKing(PieceColor color);
  vector<Move> getValidMoves(Piece *piece);
  int getPieceIndex(int x, int y, PieceColor color);
  Position getIndex(int x, int y);

  void loadTextures();
  void touchHandle(int x, int y);
  void draw();
  void run();
};

#endif
