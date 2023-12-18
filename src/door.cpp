/*
 * door.cpp
 */

#include "door.h"

/* constructor */
Door::Door() { }

Door::Door(const Door *door) {
	length_ = door->getLength();
	width_ = door->getWidth();
	height_ = door->getHeight();
	material_ = door->getMaterial();
}

void Door::setDimensions(float length, float width, float height) {
	length_ = length;
	width_ = width;
	height_ = height;
}

void Door::setMaterial(enum material material) {
	material_ = material;
} 

float Door::getLength() const {
	return length_;
}

float Door::getWidth() const {
	return width_;
}

float Door::getHeight() const {
	return height_;
}

enum material Door::getMaterial() const {
	return material_;
}

const shared_ptr<Door> Door::getPrototype() const {
	return make_shared<Door>(this);
}