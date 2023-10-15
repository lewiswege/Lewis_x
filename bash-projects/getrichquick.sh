#!/bin/bash


sleep 1

echo "What is your name?"

read name

echo "How old are you?"

read age

echo "Hello $name, you are $age years old."

sleep 2

getrich=$((( $RANDOM % 15 ) + $age))

echo "Calculating Please Wait>>>>>>>"

sleep 4

echo "$name, you will become a millionaire when you are $getrich years old"

sleep 2


#this bash script will tell you when you will bevome rich
#Run the program and give it you name and age as the
#parameters
#
#The script uses $RANDOM an environment variable to calclate
#Ive se the $RAMDOM variable to give me random numbers between 
#0-15 then this is added to your age determining when you will
#get rich
#
#
#Just play arounf with it. ;)
