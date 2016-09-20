ldapsearch -Q "cn=*bon*" | grep "^cn" | wc -l | sed 's/ //g'
