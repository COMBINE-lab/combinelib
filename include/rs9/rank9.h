/*		 
 * Sux: Succinct data structures
 *
 * Copyright (C) 2007-2013 Sebastiano Vigna 
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU Lesser General Public License as published by the Free
 *  Software Foundation; either version 3 of the License, or (at your option)
 *  any later version.
 *
 *  This library is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 *  for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef rank9_h
#define rank9_h
#include <cstdint>
#include "rs9/macros.h"

class rank9 {
private:
	const uint64_t *bits;
	uint64_t *counts;
	uint64_t num_words, num_counts;

public:
	rank9();
  rank9& operator=(rank9&& other);
	rank9( const uint64_t * const bits, const uint64_t num_bits );
	~rank9();
	uint64_t rank( const uint64_t pos );
	// Just for analysis purposes
	void print_counts();
	uint64_t bit_count();
};

#endif
