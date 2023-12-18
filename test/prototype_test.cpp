/*
 * factory_test.cpp - uses google test ( and mock) frame work to perform test application
 */
 
 #include "gtest/gtest.h"
 #include "gmock/gmock.h"
 
 #include "door.h"


/* test fixture to be used for testing */

class PrototypeTest : public testing::Test
{
public: 
	void SetUp() override {
		/* set parameters of door element */
		door_.setDimensions(7.5, 3.0, 4.5);
		door_.setMaterial(WOOD);
		/* make prototype of existing door_ */
		doorPrototype_ = door_.getPrototype();
	}
protected:
    Door door_;
	shared_ptr<Door> doorPrototype_;
};

/* test door parameters */
TEST_F(PrototypeTest, DoorComponentTest)
{
	/* test door length */
    EXPECT_FLOAT_EQ(7.5, door_.getLength());
	/* test door width */
    EXPECT_FLOAT_EQ(3.0, door_.getWidth());
	/* test door height */
    EXPECT_FLOAT_EQ(4.5, door_.getHeight());
	/* test door material */
    EXPECT_FLOAT_EQ(WOOD, door_.getMaterial());
}

/* test door prototype parameters */
TEST_F(PrototypeTest, PrototypeComponentTest)
{
	/* test prototype length */
    EXPECT_FLOAT_EQ(7.5, doorPrototype_->getLength());
	/* test door width */
    EXPECT_FLOAT_EQ(3.0, doorPrototype_->getWidth());
	/* test door height */
    EXPECT_FLOAT_EQ(4.5, doorPrototype_->getHeight());
	/* test door material */
    EXPECT_FLOAT_EQ(WOOD, doorPrototype_->getMaterial());
}




