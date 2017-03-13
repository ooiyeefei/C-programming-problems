cat $1 | grep -i "nicolas bomber" | awk '{print $(NF-1)}' 
