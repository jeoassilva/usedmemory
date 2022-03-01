#!/bin/bash

while [ 0 -le 1 ]
do
	clear
	./print_memory_address
	echo
	echo "********************************"
	echo "Used memory status in MB"
	echo "********************************"
	echo
	free -m
	sleep 1
done
