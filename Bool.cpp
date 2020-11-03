#include "Bool.h"

Bool::Bool(bool value){
	_ptr = new bool;
	*_ptr = value;
}

bool* Bool::getPtr(){
    return _ptr;
}

bool Bool::getValue(){
    return *_ptr;
}

void Bool::setValue(bool value){
	*_ptr = value;
}

void Bool::destroy() {
    delete _ptr;
}
