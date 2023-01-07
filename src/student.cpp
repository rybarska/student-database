#include "student.hpp"

Student::Student(
    std::string name,
    std::string lastName,
    std::string address,
    int indexNumber,
    std::string NIF,
    Gender gender
  )
    : name_(name)
    , lastName_(lastName)
    , address_(address)
    , indexNumber_(indexNumber)
    , NIF_(NIF)
    , gender_(gender)

  {}

std::string Student::show() const
{
  return name_ + " "
    + lastName_ + "; "
    + address_ + "; "
    + std::to_string(indexNumber_) + "; "
    + NIF_ + "; "
    + "Male";
}
