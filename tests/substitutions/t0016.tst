\S[150]\s[10]OUT=$(LANG=en_US.UTF-8 smenu -c -e 2 -E/1/A/g -I/1/B/g -n 6 \\
t0016.in)
\S[150]\s[50]\r
\S[150]\s[10]echo ":$\s[10]OUT:"
exit 0
