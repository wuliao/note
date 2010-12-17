#!/bin/bash
file=`ls`
f=`echo $file|awk -F'.' '{print $1}'`
echo $f
