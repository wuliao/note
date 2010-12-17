#!/bin/bash
echo -n "will move file '.c' to C_FILE(Y/n):"
read aaa
if [ "${aaa:-y}" = "y" ];
then
for file in find /home/wuliao/lianxi/*c
do
echo $file
mv $file ../C_FILE/
done
fi
