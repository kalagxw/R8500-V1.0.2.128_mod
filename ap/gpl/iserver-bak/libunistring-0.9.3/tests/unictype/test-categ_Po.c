/* DO NOT EDIT! GENERATED AUTOMATICALLY! */
/* Test the Unicode character type functions.
   Copyright (C) 2007 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include "test-predicate-part1.h"

    { 0x0021, 0x0023 },
    { 0x0025, 0x0027 },
    { 0x002A, 0x002A },
    { 0x002C, 0x002C },
    { 0x002E, 0x002F },
    { 0x003A, 0x003B },
    { 0x003F, 0x0040 },
    { 0x005C, 0x005C },
    { 0x00A1, 0x00A1 },
    { 0x00B7, 0x00B7 },
    { 0x00BF, 0x00BF },
    { 0x037E, 0x037E },
    { 0x0387, 0x0387 },
    { 0x055A, 0x055F },
    { 0x0589, 0x0589 },
    { 0x05C0, 0x05C0 },
    { 0x05C3, 0x05C3 },
    { 0x05C6, 0x05C6 },
    { 0x05F3, 0x05F4 },
    { 0x0609, 0x060A },
    { 0x060C, 0x060D },
    { 0x061B, 0x061B },
    { 0x061E, 0x061F },
    { 0x066A, 0x066D },
    { 0x06D4, 0x06D4 },
    { 0x0700, 0x070D },
    { 0x07F7, 0x07F9 },
    { 0x0964, 0x0965 },
    { 0x0970, 0x0970 },
    { 0x0DF4, 0x0DF4 },
    { 0x0E4F, 0x0E4F },
    { 0x0E5A, 0x0E5B },
    { 0x0F04, 0x0F12 },
    { 0x0F85, 0x0F85 },
    { 0x0FD0, 0x0FD4 },
    { 0x104A, 0x104F },
    { 0x10FB, 0x10FB },
    { 0x1361, 0x1368 },
    { 0x166D, 0x166E },
    { 0x16EB, 0x16ED },
    { 0x1735, 0x1736 },
    { 0x17D4, 0x17D6 },
    { 0x17D8, 0x17DA },
    { 0x1800, 0x1805 },
    { 0x1807, 0x180A },
    { 0x1944, 0x1945 },
    { 0x19DE, 0x19DF },
    { 0x1A1E, 0x1A1F },
    { 0x1B5A, 0x1B60 },
    { 0x1C3B, 0x1C3F },
    { 0x1C7E, 0x1C7F },
    { 0x2016, 0x2017 },
    { 0x2020, 0x2027 },
    { 0x2030, 0x2038 },
    { 0x203B, 0x203E },
    { 0x2041, 0x2043 },
    { 0x2047, 0x2051 },
    { 0x2053, 0x2053 },
    { 0x2055, 0x205E },
    { 0x2CF9, 0x2CFC },
    { 0x2CFE, 0x2CFF },
    { 0x2E00, 0x2E01 },
    { 0x2E06, 0x2E08 },
    { 0x2E0B, 0x2E0B },
    { 0x2E0E, 0x2E16 },
    { 0x2E18, 0x2E19 },
    { 0x2E1B, 0x2E1B },
    { 0x2E1E, 0x2E1F },
    { 0x2E2A, 0x2E2E },
    { 0x2E30, 0x2E30 },
    { 0x3001, 0x3003 },
    { 0x303D, 0x303D },
    { 0x30FB, 0x30FB },
    { 0xA60D, 0xA60F },
    { 0xA673, 0xA673 },
    { 0xA67E, 0xA67E },
    { 0xA874, 0xA877 },
    { 0xA8CE, 0xA8CF },
    { 0xA92E, 0xA92F },
    { 0xA95F, 0xA95F },
    { 0xAA5C, 0xAA5F },
    { 0xFE10, 0xFE16 },
    { 0xFE19, 0xFE19 },
    { 0xFE30, 0xFE30 },
    { 0xFE45, 0xFE46 },
    { 0xFE49, 0xFE4C },
    { 0xFE50, 0xFE52 },
    { 0xFE54, 0xFE57 },
    { 0xFE5F, 0xFE61 },
    { 0xFE68, 0xFE68 },
    { 0xFE6A, 0xFE6B },
    { 0xFF01, 0xFF03 },
    { 0xFF05, 0xFF07 },
    { 0xFF0A, 0xFF0A },
    { 0xFF0C, 0xFF0C },
    { 0xFF0E, 0xFF0F },
    { 0xFF1A, 0xFF1B },
    { 0xFF1F, 0xFF20 },
    { 0xFF3C, 0xFF3C },
    { 0xFF61, 0xFF61 },
    { 0xFF64, 0xFF65 },
    { 0x10100, 0x10101 },
    { 0x1039F, 0x1039F },
    { 0x103D0, 0x103D0 },
    { 0x1091F, 0x1091F },
    { 0x1093F, 0x1093F },
    { 0x10A50, 0x10A58 },
    { 0x12470, 0x12473 }

#define PREDICATE(c) uc_is_general_category (c, UC_CATEGORY_Po)
#include "test-predicate-part2.h"