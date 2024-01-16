# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    github.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 16:14:15 by ynassibi          #+#    #+#              #
#    Updated: 2024/01/16 16:24:56 by ynassibi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

input=$1;
if [ "$1" == "s" ]; then
    git status -s
elif [ "$1" == "c" ]; then
    git commit -m "$2"
elif [ "$1" == "a" ]; then
    git add  "$2"
elif [ "$1" == "p" ]; then
    git push
elif [ "$1" == "all" ]; then
	git add .
	git status -s
	git commit -m "$2"
	git push
else
    echo "Invalid argument."
fi

