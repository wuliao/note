#!/bin/bash
workDIR=/home/wuliao/lianxi/

cd $workDIR
for file in `ls`
do
f=`echo $file|awk -F'.' '{print $1}'`;
mv $file $f
done

