#ifndef __FYDBOOLEAN__
#define __FYDBOOLEAN__
#include <stdlib.h>
#include <string>
#include <map>
class Bool
{
public:
	Bool(bool value = false);
	bool* getPtr();
	bool getValue();
	void setValue(bool value);
    void destroy();
private:
    bool* _ptr;
};

#endif
