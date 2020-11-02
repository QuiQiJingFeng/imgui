#ifndef __BOOLEAN__
#define __BOOLEAN__
#include <stdlib.h>
#include <string>
#include <map>
class Boolean
{
public:
	Boolean(char* key,bool value = false);
	bool* getPtr();
	bool getValue();
    static void destroy();
private:
	std::string _key;
	static std::map<const char*,bool*> _cache;
};

#endif
