#include <iostream>
#include <cstring>

#include "field.h"
#include "ip.h"

//#include "Include_string/string.h"///////DONT FORGET TO CHANGE!!!!!!!!!!!


enum { MIN32B = 0, MAX32B = 4294967295 };


Ip::Ip(String pattern) : Field(pattern, IP) { //check if pattern is copied
  // properly!!!
  low = MIN32B;
  high = MAX32B;
}

bool Ip::set_value(String val) {
  String *val_parts;
  size_t size_of_arr;
  val.split("./", &val_parts, &size_of_arr);
  int mask = (val_parts[SEGMENTS].trim()).to_integer();
  if ((mask > 32) || (mask < 0)) {
    return false;
  }
  int mask_comp = (32 - mask);
  unsigned int ip_num = 0;
  int val_int;
  //bool is_lawful = false; // what sorts of problems could occur during parsing
  for (int i = 0; i < SEGMENTS; ++i) {
    val_int = (val_parts[i].trim()).to_integer();
    ip_num += (val_int << (24-(8*i))); // maybe change to convention
  }
  low = (ip_num >> mask_comp);
  low = (low << mask_comp);
  unsigned int high_ones = ((unsigned)MAX32B >> (unsigned)mask);
  high = low + high_ones;
  delete[] val_parts;
  return true;
}

bool Ip::match_value(String val) const {
  String *val_parts;
  size_t size_of_arr;
  val.split(".", &val_parts, &size_of_arr);
  unsigned int ip_num = 0;
  int val_int;
  bool is_lawful = false; // what sorts of problems could occur during parsing
  for (int i = 0; i < SEGMENTS; ++i) {
    val_int = (val_parts[i].trim()).to_integer();
    ip_num += (val_int << (24-(8*i))); // maybe change to convention
  }
  if ((ip_num >= low) && (ip_num <= high)) {
    is_lawful = true;
  }
  delete[] val_parts;
  return is_lawful;
}
