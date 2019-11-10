clang -std=c11 -Wall -Wextra -Werror -Wpedantic limbmx.a *.c -o a
alias compile='clang -std=c11 -Wall -Wextra -Werror -Wpedantic'
alias go='clang -std=c11 -Wall -Wextra -Werror -Wpedantic libmx.a *.c -o a'
diskutil info home_trohalska


alias go='cl && clang main.c libmx.a && ./a.out && rm a.out'

valgrind --leak-check=full ./a islands