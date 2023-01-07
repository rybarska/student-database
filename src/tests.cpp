#include <gtest/gtest.h>
#include "database.hpp"
#include "student.hpp"

TEST(CheckStructure, CanAddStudentToDb){
  Student nuno{
    "Nuno",
    "Maualuno",
    "rua da Boavista 12, 1200-066 Lisboa",
    123456,
    "123456789",
    Gender::Male
    };

    Database db;
    EXPECT_TRUE(db.add(nuno));
    EXPECT_FALSE(db.add(nuno));
};
