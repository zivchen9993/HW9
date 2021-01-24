#!/bin/bash

remain_rules=`cat "$1"|grep -o '^[^#]*'|tr -d "[:blank:]"|sort`
remain_packets=`(tee) | grep -o '^[^#]*'|tr -d "[:blank:]"|sort`
> packets_output.txt

packets_to_print=""
while IFS=, read -r first second third fourth; do
   surviving_packets=`echo "$remain_packets" | ./firewall.exe "$first"`
   surviving_packets=`echo "$surviving_packets" | ./firewall.exe "$second"`
   surviving_packets=`echo "$surviving_packets" | ./firewall.exe "$third"`
   surviving_packets=`echo "$surviving_packets" | ./firewall.exe "$fourth"`
   packets_to_print+=`echo -e "$surviving_packets"`
   packets_to_print+="\n"
done <<< "$remain_rules"

packets_to_print=`echo "$packets_to_print" | sort | uniq`
echo -e "$packets_to_print"
echo -e "$packets_to_print" > packets_output.txt
head -n -1 packets_output.txt > temp.txt ; mv temp.txt packets_output.txt
