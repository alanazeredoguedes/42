make -B
#make bonus
cc -Wall -Werror -Wextra -I. -L. main.c -lft -o testFile -lbsd
./testFile
rm -r testFile
