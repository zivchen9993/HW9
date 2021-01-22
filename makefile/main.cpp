#include <iostream>
#include <cstring>
#include "field.h"
#include "ip.h"
#include "port.h"
#include "input.h"

#include "string.h"///////DONT FORGET TO CHANGE!!!!!!!!!!!

int main (int argc, char *argv[]) {
 //need to use check args ..
  for (int i = 0; i < argc; ++i) {
    int args_fine = check_args(argc, &argv[i]);
    if (!args_fine) {
      return -1;
    }
  }
  String *law_arr;
  size_t size_of_law_arr;
  String *pattern_arr;
  size_t pat_arr_size;
  String law_base_string;
  Field *field_ptr_check;

  for (int i = 0; i < argc; ++i) {
    law_base_string = argv[i];
    law_base_string.split("=", &law_arr, &size_of_law_arr); // src-ip, xxxxxxxx
    law_arr[0].split("-", &pattern_arr, &pat_arr_size); // src, ip
    if ((pattern_arr[1].trim()).equals("ip")) {
      Ip ip_law(law_arr[0].trim());
      ip_law.set_value(law_arr[1].trim());
      field_ptr_check = &ip_law;
    } else if ((pattern_arr[1].trim()).equals("port")) {
      Port port_law(law_arr[0].trim());
      port_law.set_value(law_arr[1].trim());
      field_ptr_check = &port_law;
    }
    parse_input(*field_ptr_check);
    delete[] pattern_arr;
    delete[] law_arr;
  }
  return 0;
}
