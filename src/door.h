/*
 * door.h
 */
 
 #ifndef DOOR_H
 #define DOOR_H
 
 #include <memory>
 
 using namespace std;
 
 /* different materials a door can be made from */
 enum material { PLASTIC = 0,
                 WOOD,
				 METAL
 };
 
 class Door {
public:
    Door();
    Door(const Door *door);
	void setDimensions(float length, float width, float height);
	void setMaterial(enum material material);
	float getLength() const;
	float getWidth() const;
	float getHeight() const; 
	enum material getMaterial() const;
	const shared_ptr<Door> getPrototype() const;
 private:
	 float length_;
	 float width_;
	 float height_;
	 enum material material_;
 };
 #endif // DOOR_H