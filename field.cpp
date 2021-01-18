#include <iostream>
#include "string.h"
#include "field.h"

Field::Field(String pattern, field_type type) {
  this->type = type;
  this->pattern = pattern;
}

Field::Field(String pattern) {
  this->type = GENERIC;
  this->pattern = pattern;
}

Field::~Field() {
  // empty
}

field_type Field::get_type() const {
  return type;
}

bool Field::set_value(String val) {
  pattern = val;
  return
}

bool Field::match_value(String val) const {
  if (pattern.equals(val)) {
    return true;
  }
  return false;
}