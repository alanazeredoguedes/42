make
cc -Wall -Werror -Wextra -I. -L. main.c -lft -o testFile
./testFile
rm -r testFile
