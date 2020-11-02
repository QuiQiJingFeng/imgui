#include "Boolean.h"

Boolean::Boolean(char* key,bool value){
	_key = key;
	bool* ptr = new bool;
	*ptr = value;
	_cache[key] = ptr;	
}

bool* Boolean::getPtr(){
    const char* key = _key.c_str();
    return _cache[key];
}

bool Boolean::getValue(){
    const char* key = _key.c_str();
	return *_cache[key];
}

void Boolean::destroy() {
    for (auto iter : _cache) {
        bool * ptr = iter.second;
        delete ptr;
    }
}
