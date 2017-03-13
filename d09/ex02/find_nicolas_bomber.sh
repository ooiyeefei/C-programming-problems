cat $1 | grep -i Bomber | grep -i Nicolas | awk '{print $(NF-1)}'
