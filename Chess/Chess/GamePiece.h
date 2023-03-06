#ifndef GAMEPIECE_H
#define GAMEPIECE_H

//define enumerator constants for code readiblity
enum class color {kWhite = 0, kBlack, kNone};
enum class type {kPawn = 0, kRook, kKnight, kBishop, kQueen, kKing, kNone};

// Base class for all other gamepieces to inherit from
class GamePiece {
public:
  GamePiece();
  ~GamePiece();

  color GetColor();
  type GetType();

  bool SetType(type new_type);
  bool SetColor(color new_color);
private:
  color piece_color;
  type piece_type;
};

#endif // !GAMEPIECE_H