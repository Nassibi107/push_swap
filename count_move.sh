# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_move.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 14:18:04 by ynassibi          #+#    #+#              #
#    Updated: 2024/01/17 10:25:16 by ynassibi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# ANSI escape codes for colors
RED='\033[0;31m'
GREN='\033[0;32m'
NC='\033[0m'  # No Color

# Check the value of the first argument
if [ "$1" == 2 ]; then
    echo -e "case 2${NC}"
    input=$(seq 1 2 | sort -R | tr '\t' ' ')
    echo -e "${GREN}  $(./push_swap $input | wc -l) ${NC}\n"
elif [ "$1" == 3 ]; then
    echo -e "case 3${NC}\n"
    input=$(seq 1 3 | sort -R | tr '\t' ' '  )
     echo -e "${GREN}  $(./push_swap $input | wc -l) ${NC}\n"
elif [ "$1" == 4 ]; then
    echo -e "case 4${NC}\n"
    input=$(seq 1 4 | sort -R | tr '\t' ' ' )
     echo -e "${GREN}  $(./push_swap $input ) ${NC}\n"
elif [ "$1" == 5 ]; then
    echo -e "case 5${NC}\n"
    input=$(seq 1 5 | sort -R | tr '\t' ' '   )
     echo -e "${GREN}  $(./push_swap $input | wc -l ) ${NC}\n"
elif [ "$1" == 100 ]; then
    echo -e "case 5${NC}\n"
    input=$(seq 1 100 | sort -R | tr '\t' ' '   )
     echo -e "${GREN}  $(./push_swap $input | wc -l ) ${NC}\n"
elif [ "$1" == 500 ]; then
    echo -e "case 500${NC}\n"
    input=$(seq 1 500 | sort -R | tr '\t' ' '   )
     echo -e "${GREN}  $(./push_swap $input | wc -l ) ${NC}\n"
else
    echo "Invalid argument. This script is designed for cases 2, 3, 4, 5, 100,and 500 only."
fi
