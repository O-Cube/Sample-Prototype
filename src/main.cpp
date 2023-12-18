/*
 * client 
 */
 #include <iostream>
 #include "door.h"
 
 using namespace std;
 /* string definitions of materials */
 const string materials[] = { "PLASTIC", "WOOD", "METAL" };
 
 int main() {
	 
	 Door door;
	 door.setDimensions(5.5, 3.0, 4.5);
	 door.setMaterial(WOOD);
	 cout << "Length: " << door.getLength() << endl\
	 << "Width: " << door.getWidth() << endl \
	 << "Height: " << door.getHeight() << endl \
	 << "Material: " << materials[door.getMaterial()] << endl;
	 shared_ptr<Door> prototype = door.getPrototype();
	 cout << "Length: " << prototype->getLength() << endl\
	 << "Width: " << prototype->getWidth() << endl \
	 << "Height: " << prototype->getHeight() << endl \
	 << "Material: " << materials[prototype->getMaterial()] << endl;
	 
	 return(0);
 }