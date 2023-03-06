#include "GamePiece.h"

GamePiece::GamePiece() {
  this->piece_color = color::kNone;
  this->piece_type = type::kNone;
}

GamePiece::~GamePiece() {
  delete this;
}

/// <summary>
/// GetColor() fetches and returns the value stored in GamePiece's color variable.
/// </summary>
/// <returns>GamePiece color</returns>
color GamePiece::GetColor() {
  return this->piece_color;
}

/// <summary>
/// GetType() fetches and returns the value stored in Gamepiece's type variable
/// </summary>
/// <returns>Gamepiece type</returns>
type GamePiece::GetType() {
  return this->piece_type;
}

/// <summary>
/// SetColor() takes the input color and replaces what's stored in GamePiece's color variable with
/// that value
/// </summary>
/// <param name="new_color">Color to be set in GamePiece's color variable</param>
/// <returns>true if successful, false otherwise</returns>
bool GamePiece::SetColor(color new_color) {
  color old = this->piece_color;

  this->piece_color = new_color;

  if (this->piece_color == old)
  {
    return false;
  }
  return true;
}

/// <summary>
/// SetType() takes the input type and replaces what's stored in GamePiece's type variable
/// with that value
/// </summary>
/// <param name="new_type">Type to be set in GamePiece's type variable</param>
/// <returns>true if successful, false otherwise</returns>
bool GamePiece::SetType(type new_type) {
  type old = this->piece_type;

  this->piece_type = new_type;

  if (this->piece_type == old)
  {
    return false;
  }
  return true;
}