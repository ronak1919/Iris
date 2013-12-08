/*
	Iris is a UCI chess engine.
	Copyright (C) 2013 Kern Goldstein

	Iris is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Iris is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _PIECE_H_
#define _PIECE_H_

#include "enums.h"

/// Representa una pieza en el tablero.
class Piece
{
public:
	Piece() { this->type = PieceColorType::EMPTY; }
	Piece(PieceColorType type) { this->type = type; }

	PieceColorType GetPieceColorType() { return type; }
	Color GetColor();
	PieceType GetPieceType();
	
	static Color GetColor(PieceColorType type);
	static PieceType GetPieceType(PieceColorType type);
private:
	PieceColorType type;
	static const Color pieceColorArray[13];
	static const PieceType pieceTypeArray[13];
};

#endif