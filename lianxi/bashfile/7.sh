echo -n "want to  say hello(Y/n):"
read aaa
if [ "${aaa:-y}" = "y" ];
then 
echo hello
fi
