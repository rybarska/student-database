#include <gtest/gtest.h>
#include "database.hpp"
#include "student.hpp"

struct DatabaseTest : ::testing::Test
{
  Database db;
};

TEST_F(DatabaseTest, CanAddStudentToDb){
  Student nuno{
    "Nuno",
    "Maualuno",
    "rua da Boavista 12, 1200-066 Lisboa",
    123456,
    "123456789",
    Gender::Male
    };

    EXPECT_TRUE(db.add(nuno));
    EXPECT_FALSE(db.add(nuno));
};

TEST_F(DatabaseTest, DisplayEmptyDb) {
  auto content = db.show();
  auto expected = "";
  EXPECT_EQ(content, expected);
}
