#include "Boolean.h"

Boolean::Boolean(bool value){
	_ptr = new bool;
	*_ptr = value;
}

bool* Boolean::getPtr(){
    return _ptr;
}

bool Boolean::getValue(){
    return *_ptr;
}

void Boolean::setValue(bool value){
	*_ptr = value;
}

void Boolean::destroy() {
    delete _ptr;
}

Boolean::~Boolean(){
	destroy();
}