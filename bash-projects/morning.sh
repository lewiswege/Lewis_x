#!/bin/bash

sleep 2

name=$1
compliment=$2

user=$(whoami)
date=$(TZ="Africa/Nairobi" date)
whereami=$(pwd)

echo "Good Morning $name "

sleep 3

echo "You're looking good today $name"
 
sleep 3

echo "You have the best $2 I've ever seen $name"

sleep 3 

echo "you are currently logged in as $user" 

sleep 3

echo "Your location is in the $whereami directory" 

sleep 3

echo " The date today is $date"

sleep 2


#The script uses positional variables the first one being the name and the second one being a comliment
#To nake you have the  best day ever
