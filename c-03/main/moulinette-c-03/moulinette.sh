echo '======================================================='
gcc -Wall -Wextra -Werror ex00/* ../ex00/ft_strcmp.c -o test.out
./test.out
echo
echo 'ex00 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex01/* ../ex01/ft_strncmp.c -o test1.out
./test1.out
echo
echo 'ex01 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex02/* ../ex02/ft_strcat.c -o test2.out
./test2.out
echo
echo 'ex02 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex03/* ../ex03/ft_strncat.c -o test3.out
./test3.out
echo
echo 'ex03 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex04/* ../ex04/ft_strstr.c -o test4.out
./test4.out
echo
echo 'ex04 done'
echo '======================================================='
gcc ex05/* ../ex05/ft_strlcat.c -lbsd -o test5.out
./test5.out
echo
echo 'ex05 done'
echo '======================================================='
norminette ../ex*
rm test*.out
