\S[150]\s[10]OUT=$(LANG=en_US.UTF-8 smenu -c -e 2 -E'/(1+)/(\\1)/g' -n 15 \\
t0015.in)
\S[150]\s[150]\r
\S[150]\s[10]echo ":$\s[10]OUT:"
exit 0
