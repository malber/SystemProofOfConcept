
#include "polygon.h"

Polygon::Polygon(int x_nsides): _nsides(x_nsides){}


Polygon::~Polygon() {
}

int Polygon::nsides()
{
   return _nsides;
}

