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

 int args_fine = check_args(argc, argv);
 if (args_fine != 0 ) {
     return -1;
 }
 
  	String *law_arr ;
  	size_t size_of_law_arr;
  	String *pattern_arr;
  	size_t pat_arr_size;
  	String law_base_string;
    law_base_string = argv[1];
    Field *field_ptr_check=nullptr;
    law_base_string.split("=", &law_arr, &size_of_law_arr); 
    law_arr[0].split("-", &pattern_arr, &pat_arr_size); 
    String trimmed_pattern_arr = pattern_arr[1].trim();
    
    if ((trimmed_pattern_arr).equals("ip")) {
    	String trimmed_pattern = law_arr[0].trim();
    	String trimmed_ip = law_arr[1].trim();
    	Ip ip_law(trimmed_pattern);
   		ip_law.set_value(trimmed_ip);
    	field_ptr_check = &ip_law;
        // changes here field_ptr and ip_law point to the same place im mem , after leaving this "if" the distructor will   delete the data which      thay are pointing  and then field_ptr pointed to null , so parse should be here 
        parse_input(*field_ptr_check); 
    } 
    else if ((trimmed_pattern_arr).equals("port")) {
   	String trimmed_pattern = law_arr[0].trim();
    String trimmed_port = law_arr[1].trim();
      Port port_law(trimmed_pattern);
      port_law.set_value(trimmed_port);
      field_ptr_check = &port_law;
         // changes here - moved parse input here
      parse_input(*field_ptr_check);
    }
    delete[] pattern_arr;
    delete[] law_arr;
  
  return 0;
  
}
