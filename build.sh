#!/bin/zsh

cmake . -Bbuild -Wdev -Werror=dev && cmake --build ./build

    if [ $# -gt 0 ]
    then
        echo "$(tput setaf 1)./ArrayTransformer" $@ 'START' "$(tput setaf 7)"
    else
        echo "$(tput setaf 1)./ArrayTransformer without arguments START" "$(tput setaf 7)"
    fi
    ./ArrayTransformer $@