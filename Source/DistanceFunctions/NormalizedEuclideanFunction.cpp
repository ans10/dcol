
/*!

\brief This file contains the implementation of the NormalizedEuclideanFunction methods.

@author   Albert Orriols-Puig and Nuria Macia <br>
          Grup de Recerca en Sistemes Intel.ligents <br>
          La Salle - Universitat Ramon Llull <br>
          C/ Quatre Camins, 2. 08022, Barcelona (Spain) <br>
@date     Created April, 2009 <br>
          Last modified December, 2010

Copyright (C) 2009  Albert Orriols-Puig and Nuria Macia

This file is part of DCoL.

DCoL is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

DCoL is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with DCoL.  If not, see <http://www.gnu.org/licenses/>.

*/


#include "NormalizedEuclideanFunction.h"


NormalizedEuclideanFunction::NormalizedEuclideanFunction ( float min, float max ) {

    range = max - min;
    if ( Utils::doScreenStatistics ) 
        std::cout << "    > Creating a normalized Euclidean distance function object with range " << range << std::endl;

} // end NormalizedEuclideanFunction


NormalizedEuclideanFunction::~NormalizedEuclideanFunction () {
} // end ~NormalizedEuclideanFunction


float NormalizedEuclideanFunction::computeDistance ( float att1, float att2 ) {
    return ( range == 0 ) ? 0 : ( ( att1 - att2 ) / range );
} // computeDistance
