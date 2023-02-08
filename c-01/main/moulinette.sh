echo '======================================================='
gcc -Wall -Wextra -Werror ex00/* ../ex00/ft_ft.c -o test.out
./test.out
echo
echo 'ex00 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex01/* ../ex01/ft_ultimate_ft.c -o test1.out
./test1.out
echo
echo 'ex01 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex02/* ../ex02/ft_swap.c -o test2.out
./test2.out
echo
echo 'ex02 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex03/* ../ex03/ft_div_mod.c -o test3.out
./test3.out
echo
echo 'ex03 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex04/* ../ex04/ft_ultimate_div_mod.c -o test4.out
./test4.out
echo
echo 'ex04 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex05/* ../ex05/ft_putstr.c -o test5.out
./test5.out
echo
echo 'ex05 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex06/* ../ex06/ft_strlen.c -o test6.out
./test6.out
echo
echo 'ex06 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex07/* ../ex07/ft_rev_int_tab.c -o test7.out
./test7.out
echo
echo 'ex07 done'
echo '======================================================='
gcc -Wall -Wextra -Werror ex08/* ../ex08/ft_sort_int_tab.c -o test8.out
./test8.out
echo
echo 'ex08 done'
echo '======================================================='
echo 'norminette'
norminette ../ex0*
rm test*.out
