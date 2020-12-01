#include "Floater.h"

Floater::Floater(float value){
	_ptr = new float;
	*_ptr = value;
}

float* Floater::getPtr(){
    return _ptr;
}

float Floater::getValue(){
    return *_ptr;
}

void Floater::setValue(float value){
	*_ptr = value;
}

void Floater::destroy() {
    delete _ptr;
}

Floater::~Floater(){
	destroy();
}