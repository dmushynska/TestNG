#!/bin/zsh

cmake . -Bbuild -Wdev -Werror=dev && cmake --build ./build
echo "$(tput setaf 1)./googleTests START" "$(tput setaf 7)"
./googleTests