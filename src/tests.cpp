#include <gtest/gtest.h>
#include "database.hpp"
#include "student.hpp"

struct DatabaseTest : ::testing::Test
{
  Database db;
};

TEST_F(DatabaseTest, DisplayEmptyDb) {
  auto content = db.show();
  auto expected = "";
  EXPECT_EQ(content, expected);
}

TEST_F(DatabaseTest, DisplayNonEmptyDb)
{
  Student nuno{
    "Nuno",
    "Maualuno",
    "rua da Boavista 12, 1200-066 Lisboa",
    123456,
    "123456789",
    Gender::Male
    };
    db.add(nuno);
    // check adding the same person twice

    auto content = db.show();
    auto expected = "Nuno Maualuno; rua da Boavista 12, 1200-066 Lisboa; 123456; 123456789; Male";
    EXPECT_EQ(content, expected);
}
