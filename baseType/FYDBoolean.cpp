#include "FYDBoolean.h"

FYDBoolean::FYDBoolean(char* key,bool value){
	_key = key;
	_ptr = new bool;
	*_ptr = value;
}

bool* FYDBoolean::getPtr(){
    return _ptr;
}

bool FYDBoolean::getValue(){
    return *_ptr;
}

void FYDBoolean::destroy() {
    delete _ptr;
}
