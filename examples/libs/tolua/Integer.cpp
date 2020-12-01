#include "Integer.h"

Integer::Integer(int value){
	_ptr = new int;
	*_ptr = value;
}

int* Integer::getPtr(){
    return _ptr;
}

int Integer::getValue(){
    return *_ptr;
}

void Integer::setValue(int value){
	*_ptr = value;
}

void Integer::destroy() {
    delete _ptr;
}

Integer::~Integer(){
	destroy();
}