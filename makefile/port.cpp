#include <iostream>
#include <cstring>

#include "field.h"
#include "port.h"
#include "string.h"///////DONT FORGET TO CHANGE!!!!!!!!!!!

enum { MIN16B = 0, MAX16B = 65535 };


Port::Port(String pattern) : Field(pattern, PORT) { 
  range[0] = MIN16B;
  range[1] = MAX16B;
}

bool Port::set_value(String val) {
  String *val_parts;
  size_t size_of_arr;

  val.split("-", &val_parts, &size_of_arr);
  //bool is_lawful = false; // what sorts of problems could occur during parsing
  int first_lim = (val_parts[0]).to_integer();
  int second_lim = (val_parts[1]).to_integer();
  if (first_lim > second_lim){
  	return false;
  }
  else{
    range[0] = first_lim;
    range[1] = second_lim;
  } 
  delete[] val_parts;
  return true;
}

bool Port::match_value(String val) const {
  bool is_lawful = false;
  int val_num = val.to_integer();
  if ((val_num >= range[0]) && (val_num <= range[1])) {
    is_lawful = true;
  }
  return is_lawful;
}
