/*
    Laser, a UCI chess engine written in C++11.
    Copyright 2015-2016 Jeffrey An and Michael An

    Laser is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Laser is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Laser.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __BTABLES_H__
#define __BTABLES_H__

/*
 * This file stores all of the pregenerated tables necessary for bitboard move
 * generation and evaluation. These values must be in the code so that the
 * program is a single standalone unit, so keeping them in a separate file keeps
 * code clean.
 */

//------------------------------Piece tables--------------------------------
const int midgamePieceValues[6][64] = {
{ // Pawns
  0,  0,  0,  0,  0,  0,  0,  0,
 20, 25, 30, 35, 35, 30, 25, 20,
 10, 10, 20, 23, 23, 15, 10, 10,
  0,  5, 15, 18, 18, 10,  5,  0,
 -5, -5,  5, 15, 15,  0, -5, -5,
 -5,  0,  0,  8,  8, -5,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
  0,  0,  0,  0,  0,  0,  0,  0
},
{ // Knights
-35,-15,-10, -5, -5,-10,-15,-35,
-15, -5,  0,  0,  0,  0, -5,-15,
 -5,  5, 10, 15, 15, 10,  5, -5,
-10,  5,  5, 10, 10,  5,  5,-10,
-10,  0,  5, 10, 10,  5,  0,-10,
-15,  5,  5,  5,  5,  5,  5,-15,
-15, -5,  0,  5,  5,  0, -5,-15,
-30,-15,-10, -5, -5,-10,-15,-30
},
{ // Bishops
-10, -5, -5, -5, -5, -5, -5,-10,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  5,  0,  0,  5,  0, -5,
 -5,  5,  5,  0,  0,  5,  5, -5,
 -5,  5,  5,  0,  0,  5,  5, -5,
 -5,  5,  5,  0,  0,  5,  5, -5,
 -5,  5,  0,  0,  0,  0,  5, -5,
-10, -5, -5, -5, -5, -5, -5,-10
},
{ // Rooks
 -5,  0,  0,  0,  0,  0,  0, -5,
 10, 10, 10, 10, 10, 10, 10, 10,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5
},
{ // Queens
 -5,  0,  0,  0,  0,  0,  0, -5,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
 -5,  0,  0,  0,  0,  0,  0, -5
},
{ // Kings
-60,-60,-60,-60,-60,-60,-60,-60,
-50,-50,-50,-50,-50,-50,-50,-50,
-40,-40,-40,-40,-40,-40,-40,-40,
-30,-30,-30,-30,-30,-30,-30,-30,
-10,-10,-15,-20,-20,-15,-10,-10,
  0,  5, -5,-10,-10, -5,  5,  0,
 12, 16,  5, -5, -5,  5, 16, 12,
 25, 30, 28,  0,  5, 18, 32, 25 
}
};

const int endgamePieceValues[6][64] = {
{ // Pawns
  0,  0,  0,  0,  0,  0,  0,  0,
 30, 35, 40, 40, 40, 40, 35, 30,
 10, 15, 20, 20, 20, 20, 15, 10,
 -5,  0,  5,  5,  5,  5,  0, -5,
-10, -5,  0,  0,  0,  0, -5,-10,
-15,-10, -5, -5, -5, -5,-10,-15,
-15,-10, -5, -5, -5, -5,-10,-15,
  0,  0,  0,  0,  0,  0,  0,  0
},
{ // Knights
-20,-10,-10, -5, -5,-10,-10,-20,
-10, -5,  0,  0,  0,  0, -5,-10,
-10,  0,  5,  5,  5,  5,  0,-10,
 -5,  5,  5, 10, 10,  5,  5, -5,
 -5,  5,  5, 10, 10,  5,  5, -5,
-10,  0,  5,  5,  5,  5,  0,-10,
-10, -5,  0,  0,  0,  0, -5,-10,
-20,-10,-10, -5, -5,-10,-10,-20
},
{ // Bishops
-10, -5, -5, -5, -5, -5, -5,-10,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  5,  0,  0,  5,  0, -5,
 -5,  5,  5,  0,  0,  5,  5, -5,
 -5,  5,  5,  0,  0,  5,  5, -5,
 -5,  5,  5,  0,  0,  5,  5, -5,
 -5,  5,  0,  0,  0,  0,  5, -5,
-10, -5, -5, -5, -5, -5, -5,-10
},
{ // Rooks
 -5,  0,  0,  0,  0,  0,  0, -5,
 10, 10, 10, 10, 10, 10, 10, 10,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5,
 -5,  0,  0,  0,  0,  0,  0, -5
},
{ // Queens
 -5,  0,  0,  0,  0,  0,  0, -5,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
 -5,  0,  0,  0,  0,  0,  0, -5
},
{ // Kings
-30,-25,-20,-17,-17,-20,-25,-30,
-25,-15,  0,  5,  5,  0,-15,-25,
-20,  0, 12, 15, 15, 12,  0,-20,
-17,  5, 15, 20, 20, 15,  5,-17,
-17,  5, 15, 20, 20, 15,  5,-17,
-20,  0, 12, 15, 15, 12,  0,-20,
-25,-15,  0,  5,  5,  0,-15,-25,
-30,-25,-20,-17,-17,-20,-25,-30 
}
};

// Mobility tables, with zero padding for pieces that cannot move up to 27 squares
const int mobilityScore[4][28] = {
{ // Knights
-25,-13, -5,  2,  8, 13, 17, 21, 25,
  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
{ // Bishops
-40,-26,-16, -7,  0,  6, 12, 17, 22, 26, 30, 34, 37, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
{ // Rooks
-40,-25,-17,-11, -6, -2,  2,  6, 10, 14, 18, 21, 24, 26, 28,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
{ // Queens
-40,-27,-20,-15,-11, -8, -6, -4, -2,  0,  1,  2,  3,  4,
  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18}
};

// Lookup table for knight moves
const uint64_t KNIGHTMOVES[64] = {
0x0000000000020400, 0x0000000000050800, 0x00000000000a1100, 0x0000000000142200,
0x0000000000284400, 0x0000000000508800, 0x0000000000a01000, 0x0000000000402000,
0x0000000002040004, 0x0000000005080008, 0x000000000a110011, 0x0000000014220022,
0x0000000028440044, 0x0000000050880088, 0x00000000a0100010, 0x0000000040200020,
0x0000000204000402, 0x0000000508000805, 0x0000000a1100110a, 0x0000001422002214,
0x0000002844004428, 0x0000005088008850, 0x000000a0100010a0, 0x0000004020002040,
0x0000020400040200, 0x0000050800080500, 0x00000a1100110a00, 0x0000142200221400,
0x0000284400442800, 0x0000508800885000, 0x0000a0100010a000, 0x0000402000204000,
0x0002040004020000, 0x0005080008050000, 0x000a1100110a0000, 0x0014220022140000,
0x0028440044280000, 0x0050880088500000, 0x00a0100010a00000, 0x0040200020400000,
0x0204000402000000, 0x0508000805000000, 0x0a1100110a000000, 0x1422002214000000,
0x2844004428000000, 0x5088008850000000, 0xa0100010a0000000, 0x4020002040000000,
0x0400040200000000, 0x0800080500000000, 0x1100110a00000000, 0x2200221400000000,
0x4400442800000000, 0x8800885000000000, 0x100010a000000000, 0x2000204000000000,
0x0004020000000000, 0x0008050000000000, 0x00110a0000000000, 0x0022140000000000,
0x0044280000000000, 0x0088500000000000, 0x0010a00000000000, 0x0020400000000000
};

// Lookup table for king moves
const uint64_t KINGMOVES[64] = {
0x0000000000000302, 0x0000000000000705, 0x0000000000000e0a, 0x0000000000001c14,
0x0000000000003828, 0x0000000000007050, 0x000000000000e0a0, 0x000000000000c040,
0x0000000000030203, 0x0000000000070507, 0x00000000000e0a0e, 0x00000000001c141c,
0x0000000000382838, 0x0000000000705070, 0x0000000000e0a0e0, 0x0000000000c040c0,
0x0000000003020300, 0x0000000007050700, 0x000000000e0a0e00, 0x000000001c141c00,
0x0000000038283800, 0x0000000070507000, 0x00000000e0a0e000, 0x00000000c040c000,
0x0000000302030000, 0x0000000705070000, 0x0000000e0a0e0000, 0x0000001c141c0000,
0x0000003828380000, 0x0000007050700000, 0x000000e0a0e00000, 0x000000c040c00000,
0x0000030203000000, 0x0000070507000000, 0x00000e0a0e000000, 0x00001c141c000000,
0x0000382838000000, 0x0000705070000000, 0x0000e0a0e0000000, 0x0000c040c0000000,
0x0003020300000000, 0x0007050700000000, 0x000e0a0e00000000, 0x001c141c00000000,
0x0038283800000000, 0x0070507000000000, 0x00e0a0e000000000, 0x00c040c000000000,
0x0302030000000000, 0x0705070000000000, 0x0e0a0e0000000000, 0x1c141c0000000000,
0x3828380000000000, 0x7050700000000000, 0xe0a0e00000000000, 0xc040c00000000000,
0x0203000000000000, 0x0507000000000000, 0x0a0e000000000000, 0x141c000000000000,
0x2838000000000000, 0x5070000000000000, 0xa0e0000000000000, 0x40c0000000000000
};

// The number of relevant bits for rook and bishop occupancy sets for each square
const int NUM_ROOK_BITS[64] = {
    12, 11, 11, 11, 11, 11, 11, 12,
    11, 10, 10, 10, 10, 10, 10, 11,
    11, 10, 10, 10, 10, 10, 10, 11,
    11, 10, 10, 10, 10, 10, 10, 11,
    11, 10, 10, 10, 10, 10, 10, 11,
    11, 10, 10, 10, 10, 10, 10, 11,
    11, 10, 10, 10, 10, 10, 10, 11,
    12, 11, 11, 11, 11, 11, 11, 12
};

const int NUM_BISHOP_BITS[64] = {
    6, 5, 5, 5, 5, 5, 5, 6,
    5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 7, 7, 7, 7, 5, 5,
    5, 5, 7, 9, 9, 7, 5, 5,
    5, 5, 7, 9, 9, 7, 5, 5,
    5, 5, 7, 7, 7, 7, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5,
    6, 5, 5, 5, 5, 5, 5, 6
};

#endif