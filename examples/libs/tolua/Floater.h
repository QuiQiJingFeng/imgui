#ifndef __FYDFLOATER__
#define __FYDFLOATER__
#include <stdlib.h>
class Floater {
private:
    float* _ptr;
public:
	Floater(float value = false);
	float* getPtr();
	float getValue();
	void setValue(float value);
    void destroy();
	~Floater();
};

#endif
