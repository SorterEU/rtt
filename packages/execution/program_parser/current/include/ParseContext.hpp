/***************************************************************************
  tag: Peter Soetens  Mon Jan 19 14:11:26 CET 2004  ParseContext.hpp

                        ParseContext.hpp -  description
                           -------------------
    begin                : Mon January 19 2004
    copyright            : (C) 2004 Peter Soetens
    email                : peter.soetens@mech.kuleuven.ac.be

 ***************************************************************************
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the Free Software   *
 *   Foundation, Inc., 59 Temple Place,                                    *
 *   Suite 330, Boston, MA  02111-1307  USA                                *
 *                                                                         *
 ***************************************************************************/

#ifndef PARSECONTEXT_HPP
#define PARSECONTEXT_HPP

#include "parser-types.hpp"
#include "ValueParser.hpp"
#include "GlobalFactory.hpp"

namespace ORO_Execution
{

    /**
     * A Helper class to store parser relevant
     * objects.
     */
    struct ParseContext
    {
        ValueParser valueparser;
        GlobalFactory globalfactory;
  };
}

#endif
