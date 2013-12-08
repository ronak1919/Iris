/*
	Iris is a UCI chess engine.
	Copyright (C) 2013 Kern Goldstein

	Iris is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License version 2
	as published by the Free Software Foundation.

	Iris is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include "enums.h"
#include "piece.h"

int main()
{
	std::cout << "Iris (Build 1)\n\n";

	Piece p1 = Piece(PieceColorType::WHITE_KNIGHT);
	Piece p2 = Piece(PieceColorType::WHITE_KNIGHT);
	Piece *p3 = new Piece(PieceColorType::WHITE_KNIGHT);

	std::cout << "Color of p1 is " << p1.GetColor() << std::endl;
	std::cout << "Color of BLACK_BISHOP is " << Piece::GetColor(PieceColorType::BLACK_BISHOP) << std::endl;
	std::cout << "Color of p3 is " << p3->GetColor() << std::endl;

	return 0;
}