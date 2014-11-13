#include <iostream>

class Polygon {
	private:
		int _nsides;
	public:
		Polygon(int x_nsides);
		~Polygon(void);
		//virtual int area (void);
		int nsides(void);

};