#include <iostream>
#include <cstring>

#include "field.h"
#include "ip.h"
#include "port.h"

#include "Include_string/string.h"///////DONT FORGET TO CHANGE!!!!!!!!!!!
enum { SRC_IP = 1, DST_IP, SRC_PORT, DST_PORT };
/*
static int type_of_packet_part(char *check_str) {
  if (strcmp(check_str, "src-ip")) {
    return SRC_IP;
  } else if (strcmp(check_str, "dst-ip")) {
    return DST_IP;
  } else if (strcmp(check_str, "src-port")) {
    return SRC_PORT;
  } else if (strcmp(check_str, "dst-port")) {
    return DST_PORT;
  }
  return 0;
}
 */
/////////////////////////////////////////////////////
////////////////////functions from field.h//////////
/////////////////////////////////////////////////////

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
  field_type our_type = get_type();
  bool is_success;
  if (our_type == IP) {
    Field *field_ip = new Ip(pattern);
    Ip *ip = (Ip*)field_ip;
    is_success = ip->set_value(val);
  } else if (our_type == PORT) {
    Field *field_port = new Port(pattern);
    Port *port = (Port*)field_port;
    is_success = port->set_value(val);
  } else {
    is_success = false;
  }
  return is_success;
}

bool Field::match_value(String val) const {
  field_type our_type = get_type();
  bool is_success;
  if (our_type == IP) {
    Field *field_ip = new Ip(pattern);
    Ip *ip = (Ip*)field_ip;
    is_success = ip->match_value(val);
  } else if (our_type == PORT) {
    Field *field_port = new Port(pattern);
    Port *port = (Port*)field_port;
    is_success = port->match_value(val);
  } else {
    is_success = false;
  }
  return is_success;
}

bool Field::match(String packet) {
  String *tmp_arr;
  size_t size_of_tmp_arr;
  packet.split(", =", &tmp_arr, &size_of_tmp_arr);
  field_type type_check;
  for (int i = 0; i < 4; ++i) {
    if (String("src-ip").equals(tmp_arr[i*2])) {
      char * cat_string = strcat("src-ip", tmp_arr[i*2 + 1]);
    } else if (strcmp(tmp_arr[i*2], "dst-ip")) {
      return DST_IP;
    } else if (strcmp(tmp_arr[i*2], "src-port")) {
      return SRC_PORT;
    } else if (strcmp(tmp_arr[i*2], "dst-port")) {
      return DST_PORT;
    }
    String check_string()
    match_value(tmp_arr[(i*2) + 1);
    return false;
  }
  }


  ///delete[] tmp_arr; (with size_of_arr)
}