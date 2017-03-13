# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    main.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyork <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/18 19:36:12 by kyork             #+#    #+#              #
#    Updated: 2016/08/18 21:39:27 by kyork            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -rf /tmp/defuse_test
mkdir /tmp/defuse_test
cp ./defuse.sh /tmp/defuse_test
cd /tmp/defuse_test

touch bomb.txt
echo "atime, mtime before running defuse:" $(stat -f '%a %m' bomb.txt)

sleep 2

cat bomb.txt

echo "atime, mtime after catting defuse:" $(stat -f '%a %m' bomb.txt)

sh defuse.sh
sh defuse.sh
sh defuse.sh
sh defuse.sh
sh defuse.sh

echo "atime, mtime after running defuse 5 times:" $(stat -f '%a %m' bomb.txt)

cd /
rm -rf /tmp/defuse_test
