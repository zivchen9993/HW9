#include <iostream>
#include <cstring>
#include <stdio.h>
#include "field.h"
#include "ip.h"
#include "port.h"
#include "input.h"
#include "string.h"

using namespace std;
///////DONT FORGET TO CHANGE!!!!!!!!!



int main (int argc, char **argv) {

 cout << "im here" << endl;
 int args_fine = check_args(argc-1, argv+1);
 if (!args_fine) {
     return -1;
 }
 
 // cout << "im here" << endl;
  String *law_arr;
  size_t size_of_law_arr;
  String *pattern_arr;
  size_t pat_arr_size;
  String law_base_string;
  Field *field_ptr_check;
  
  for (int i = 0; i < argc-1; ++i) {
  cout << argc << endl;
    law_base_string = argv[i+1];
    cout << argv[i+1] <<endl;
      cout << "im here2" << endl;
    law_base_string.split("=", &law_arr, &size_of_law_arr); // src-ip, xxxxxxxx
     cout << "im here3" << endl;
       cout << size_of_law_arr <<endl;
    law_arr[0].split("-", &pattern_arr, &pat_arr_size); // src, ip
     cout << "im here4" << endl;
    
    cout << pattern_arr[1].data <<endl;
    if ((pattern_arr[1].trim()).equals("ip")) {
     cout << "im here5" << endl;
      Ip ip_law(law_arr[0].trim());
       cout << "im here6" << endl;
      ip_law.set_value(law_arr[1].trim());
       cout << "im here7" << endl;
      field_ptr_check = &ip_law;
       cout << "im here8" << endl;
    } else if ((pattern_arr[1].trim()).equals("port")) {
     cout << "im here9" << endl;
      Port port_law(law_arr[0].trim());
       cout << "im here10" << endl;
      port_law.set_value(law_arr[1].trim());
       cout << "im here11" << endl;
      field_ptr_check = &port_law;
    }
    cout << "befor_parse" << endl;
    parse_input(*field_ptr_check);
    delete[] pattern_arr;
    delete[] law_arr;
  }
  
  return 0;
}
