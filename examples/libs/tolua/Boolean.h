#ifndef __FYDBOOLEAN__
#define __FYDBOOLEAN__
#include <stdlib.h>
class Boolean {
private:
    bool* _ptr;
public:
	Boolean(bool value = false);
	bool* getPtr();
	bool getValue();
	void setValue(bool value);
    void destroy();
	~Boolean();
};

#endif
