echo '======================================================='
gcc -Wall -Wextra -Werror ex00/* ../ex00/ft_strcpy.c -o test.out
./test.out
echo
echo 'ex00 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex01/* ../ex01/ft_strncpy.c -o test1.out
./test1.out
echo
echo 'ex01 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex02/* ../ex02/ft_str_is_alpha.c -o test2.out
./test2.out
echo
echo 'ex02 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex03/* ../ex03/ft_str_is_numeric.c -o test3.out
./test3.out
echo
echo 'ex03 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex04/* ../ex04/ft_str_is_lowercase.c -o test4.out
./test4.out
echo
echo 'ex04 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex05/* ../ex05/ft_str_is_uppercase.c -o test5.out
./test5.out
echo
echo 'ex05 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex06/* ../ex06/ft_str_is_printable.c -o test6.out
./test6.out
echo
echo 'ex06 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex07/* ../ex07/ft_strupcase.c -o test7.out
./test7.out
echo
echo 'ex07 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex08/* ../ex08/ft_strlowcase.c -o test8.out
./test8.out
echo
echo 'ex08 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex09/* ../ex09/ft_strcapitalize.c -o test9.out
./test9.out
echo
echo 'ex09 done'
echo '======================================================='
gcc ex10/* ../ex10/ft_strlcpy.c -lbsd -o test10.out
./test10.out
echo
echo 'ex10 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex11/* ../ex11/ft_putstr_non_printable.c -o test11.out
./test11.out
echo
echo 'ex11 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex12/* ../ex12/ft_print_memory.c -o test12.out
./test12.out
echo
echo 'ex12 done'
echo '======================================================='
echo 'norminette'
norminette ../ex*
rm test*.out
