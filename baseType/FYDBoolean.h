#ifndef __FYDBOOLEAN__
#define __FYDBOOLEAN__
#include <stdlib.h>
#include <string>
#include <map>
class FYDBoolean
{
public:
	FYDBoolean(char* key,bool value = false);
	bool* getPtr();
	bool getValue();
    void destroy();
private:
	std::string _key;
    bool* _ptr;
};

#endif
