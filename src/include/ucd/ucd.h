/* Unicode Character Database API
 *
 * Copyright (C) 2012 Reece H. Dunn
 *
 * This file is part of ucd-tools.
 *
 * ucd-tools is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ucd-tools is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ucd-tools.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef UNICODE_CHARACTER_DATA_H
#define UNICODE_CHARACTER_DATA_H

#include <stdint.h>

/** @brief Unicode Character Database
  */
namespace ucd
{
	/** @brief Represents a Unicode codepoint.
	  */
	typedef uint32_t codepoint_t;

	/** @brief Unicode General Category Values
	  * @see   http://www.unicode.org/reports/tr44/
	  */
	enum category
	{
		// Other

		Cc, /**< @brief Control Character */
		Cf, /**< @brief Format Control Character */
		Ci, /**< @brief Invalid Unicode Character */
		Cn, /**< @brief Unassigned */
		Co, /**< @brief Private Use */
		Cs, /**< @brief Surrogate Code Point */

		// Letter

		Ll, /**< @brief Lower Case Letter */
		Lm, /**< @brief Letter Modifier */
		Lo, /**< @brief Other Letter */
		Lt, /**< @brief Title Case Letter */
		Lu, /**< @brief Upper Case Letter */

		// Mark

		Mc, /**< @brief Spacing Mark */
		Me, /**< @brief Enclosing Mark */
		Mn, /**< @brief Non-Spacing Mark */

		// Symbol

		Sc, /**< @brief Currency Symbol */
		Sk, /**< @brief Modifier Symbol */
		Sm, /**< @brief Math Symbol */
		So, /**< @brief Other Symbol */

		// Number

		Nd, /**< @brief Decimal Digit */
		Nl, /**< @brief Letter-Like Number */
		No, /**< @brief Other Number */

		// Punctuation

		Pc, /**< @brief Connector */
		Pd, /**< @brief Dash/Hyphen */
		Pe, /**< @brief Close Punctuation Mark */
		Pf, /**< @brief Final Quotation Mark */
		Pi, /**< @brief Initial Quotation Mark */
		Po, /**< @brief Other */
		Ps, /**< @brief Open PUnctuation Mark */

		// Separator

		Zc, /**< @brief Whitespace character in the Cc category */
		Zl, /**< @brief Line Separator */
		Zp, /**< @brief Paragraph Separator */
		Zs, /**< @brief Space Separator */
	};

	/** @brief Lookup the General Category for a Unicode codepoint.
	  *
	  * @param c The Unicode codepoint to lookup.
	  * @return  The General Category of the Unicode codepoint.
	  */
	category lookup_category(codepoint_t c);
}

#endif
