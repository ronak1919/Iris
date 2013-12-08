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

#include "piece.h"
#include "enums.h"

///
/// Constantes estáticas
///

const Color Piece::pieceColorArray[13] = { BOTH, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE,
BLACK, BLACK, BLACK, BLACK, BLACK, BLACK };

const PieceType Piece::pieceTypeArray[13] = { NOTHING, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING,
PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING };

///
/// Funciones miembro
///

Color Piece::GetColor()
{
	return pieceColorArray[this->type];
}

PieceType Piece::GetPieceType()
{
	return pieceTypeArray[this->type];
}

///
/// Funciones estáticas
///

Color Piece::GetColor(PieceColorType type)
{
	return pieceColorArray[type];
}

PieceType Piece::GetPieceType(PieceColorType type)
{
	return pieceTypeArray[type];
}