#ifndef __FYDINTEGER__
#define __FYDINTEGER__
#include <stdlib.h>
class Integer {
private:
    int* _ptr;
public:
	Integer(int value = false);
	int* getPtr();
	int getValue();
	void setValue(int value);
    void destroy();
	~Integer();
};

#endif
