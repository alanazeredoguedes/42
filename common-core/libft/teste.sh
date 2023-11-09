make -B
#make bonus
cc -Wall -Werror -Wextra -I. -L. test.c -lft -o testFile -lbsd
./testFile
rm -r testFile
