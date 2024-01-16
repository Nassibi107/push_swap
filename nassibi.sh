# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    nassibi.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 10:37:49 by ynassibi          #+#    #+#              #
#    Updated: 2024/01/16 15:28:18 by ynassibi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# ANSI escape codes for colors
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'  # No Color

# Check the value of the first argument
if [ "$1" == 2 ]; then
    echo -e "${GREEN}case 2${NC}"
    input=$(seq 1 2 | sort -R | tr '\t' ' ' )
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
elif [ "$1" == 3 ]; then
    echo -e "${GREEN}case 3${NC}\n"
    input=$(seq 1 3 | sort -R | tr '\t' ' ' )
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
elif [ "$1" == 4 ]; then
    echo -e "${GREEN}case 4${NC}\n"
    input=$(seq 1 4 | sort -R | tr '\t' ' ')
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
elif [ "$1" == 5 ]; then
    echo -e "${GREEN}case 5${NC}\n"
    input=$(seq 1 5 | sort -R | tr '\t' ' ')
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
elif [ "$1" == 10 ]; then
    echo -e "${GREEN}case 5${NC}\n"
    input=$(seq 1 10 | sort -R | tr '\t' ' ')
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
elif [ "$1" == 16 ]; then
    echo -e "${GREEN}case 5${NC}\n"
    input=$(seq 1 16 | sort -R | tr '\t' ' ')
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
elif [ "$1" == 25 ]; then
    echo -e "${GREEN}case 5${NC}\n"
    input=$(seq 1 25 | sort -R | tr '\t' ' ')
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
elif [ "$1" == 50 ]; then
    echo -e "${GREEN}case 5${NC}\n"
    input=$(seq 1 50 | sort -R | tr '\t' ' ')
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
elif [ "$1" == 100 ]; then
    echo -e "${GREEN}case 5${NC}\n"
    input=$(seq 1 100 | sort -R | tr '\t' ' ')
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
elif [ "$1" == 500 ]; then
    echo -e "${GREEN}case 5${NC}\n"
    input=$(seq 1 500 | sort -R | tr '\t' ' ')
    echo -e "${RED} $input ${NC}\n" && echo "$(./push_swap $input)"
else
    echo "Invalid argument. This script is designed for cases 2, 3, 4,5,10,16,25,50,100 and 5 only."
fi
