\S[150]\s[10]OUT=$(LANG=en_US.UTF-8 smenu -S'/(.)(.)(.)/\\3<-\\2->\\1/g' \\
                                 -s '#150' -n 15 t0011.in)
\S[150]\s[50]\r
\S[150]\s[10]echo ":$\s[10]OUT:"
exit 0
