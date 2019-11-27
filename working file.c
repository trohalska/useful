// -------------------INPUT-------------------
    // printf("\n%s\n", "\x1b[32m-------------------INPUT-------------------\033[0m");
    // /*printf("%s\n", str);*/
    // for (int i = 0; i < G; i++) {
    //     for (int j = 0; j < G; j++) {
    //         if (matrix[i][j] == 0)
    //             printf("%s\t", "-");
    //         else
    //             printf("%d\t", matrix[i][j]);
    //     }
    //     printf("%s", "\n");
    // }
    // printf("%s\n", "---------------------");
    // for (int i = 0; i < G; i++) {
    //     printf("%d - %s\n", i, arr_islands[i]);
    // }
//-------------------INPUT-------------------


printf("%s\n", "\x1b[32m--ckeck 6 complete--chech if line is correct\033[0m");


void mx_printpathstest(t_all_paths *paths)
{
    t_all_paths *q = paths;

    if (paths != NULL) {
        while (q != NULL) {
            mx_printstr("count = ");
            mx_printint(q->count);
            mx_printstr(" == ");

            mx_printarrint(q->path, q->count);

            mx_printint(q->distance);
            mx_printstr("\n");
            q = q->next;
        }
    }
    else {
        mx_printstr("NULL");
    }
    mx_printstr("\n");
}

//------------
    printf("%s\n", "\x1b[32m-------------------LEAKS-------------------\033[0m");
    
    if (*matrix != NULL)
        printf("%s\n", "\x1b[35m matrix \033[0m");
    if (*arr_islands!= NULL)
        printf("%s\n", "\x1b[35m arr_islands \033[0m");
    if (str != NULL)
        printf("%s\n", "\x1b[35m str \033[0m");
//------------

//------------
    printf("%s\n", "\x1b[32m-------------------LEAKS-------------------\033[0m");
    system("leaks -q a");
//------------


