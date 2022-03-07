// copied from QMK, then adapted for ZMK by MrZealot
// original copyright notice below

/* Copyright 2018 fuge
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEYMAP_HUNGARIAN
#define KEYMAP_HUNGARIAN

// basic letters
#define HU_Z (Y)
#define HU_Y (Z)

// num row
#define HU_0 (GRAVE)
#define HU_1 (N1)
#define HU_2 (N2)
#define HU_3 (N3)
#define HU_4 (N4)
#define HU_5 (N5)
#define HU_6 (N6)
#define HU_7 (N7)
#define HU_8 (N8)
#define HU_9 (N9)
#define HU_OE (N0) // ö

#define HU_UE (MINUS) // ü
#define HU_OO (EQUAL) // ó

// q row
#define HU_OEE (LBKT) // ő
#define HU_UU (RBKT) // ú

// a row
#define HU_EE (SCLN) // é
#define HU_AA (QUOT) // á
#define HU_UEE (NON_US_HASH) // ű

#define HU_MINS (SLASH) // - 

#define HU_DOT (DOT) // .
#define HU_COMM (COMMA) // ,

// shifted characters
// num row
#define HU_PARA (LS(HU_0)) // §
#define HU_QUOT (LS(HU_1)) // '
#define HU_DQOT (LS(HU_2)) // "
#define HU_PLUS (LS(HU_3)) // + 
#define HU_EXLM (LS(HU_4)) // !
#define HU_PERC (LS(HU_5)) // %
#define HU_SLSH (LS(HU_6)) // /
#define HU_EQL  (LS(HU_7)) // =
#define HU_LPRN (LS(HU_8)) // (
#define HU_RPRN (LS(HU_9)) // )

// í,y row
#define HU_II	(NON_US_BACKSLASH) // í
#define HU_QST  (LS(HU_COMM)) // ?
#define HU_COLN (LS(HU_DOT)) // :
#define HU_UNDS (LS(HU_MINS)) // _

// Alt Gr'd characters
// num row
#define HU_TILD (RA(HU_1)) // ~
//#define HU_?? (RA(HU_2)) // ˇ (proper name?)
#define HU_CIRC (RA(HU_3)) // ^
#define HU_BRV (RA(HU_4)) // ˘
#define HU_RING (RA(HU_5)) // °
//#define HU_?? (RA(HU_6)) // ˛ (proper name?)
#define HU_GRV (RA(HU_7)) // `
//#define HU_?? (RA(HU_8)) // ˙ (proper name?)
#define HU_ACUT (RA(HU_9)) // ´ 

// q row
#define HU_BSLS (RA(Q)) // \ backslash 
#define HU_PIPE (RA(W)) // |
#define HU_DIV (RA(HU_OEE)) // ÷
#define HU_CRSS (RA(HU_UU)) // ×
#define HU_EURO (RA(U)) // €

// a row
#define HU_LBKT (RA(F)) // [
#define HU_RBKT (RA(G)) // ]
#define HU_DLR  (RA(HU_EE)) // $
#define HU_SS (RA(HU_AA)) // ß

// í,y row
#define HU_LESS (RA(HU_II)) // < 
#define HU_MORE (RA(HU_Y)) // >
#define HU_HASH (RA(X)) // # 
#define HU_AMPR (RA(C)) // &
#define HU_AT  (RA(V)) // @
#define HU_LCBR (RA(B))// {
#define HU_RCBR (RA(N)) // }
#define HU_SCLN (RA(HU_COMM)) // ;
#define HU_ASTR (RA(HU_MINS)) // *

#endif