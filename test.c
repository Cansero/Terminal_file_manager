// refer to https://en.wikipedia.org/wiki/ANSI_escape_code for details

#include <stdio.h>
#include <dirent.h>
#include <unistd.h>
#include <limits.h>
#include <conio.h>

#define FG_RED "\x1b[31m"
#define BG_RED "\x1b[41m"
#define RESET "\x1b[0m"
#define BOLD "\x1b[1m"
#define UNDERLINE "\x1b[4m"
#define BLINK "\x1b[6m"

// int main(int argc, char const *argv[])
// {
//     struct dirent *de;
    
//     char cwd[PATH_MAX];
//     getcwd(cwd, sizeof(cwd));

//     DIR *dr = opendir(cwd);

//     for (int i = 1; (de = readdir(dr) != NULL); i++){
//         printf("%d %s\n", i, de->d_name);
//     }

//     return 0;
// }

int main(int argc, char const *argv[])
{
    int c;
    int keep = 1;
    while (keep)
    {
        c = getch();
        switch (c)
        {
        case 'a':
            printf("bien hecho: %c", c);
            break;
        
        case 'q':
            keep = 0;
            break;
        case 0x08:  // backspace
            printf("lol");
            break;
        case 0x25:  // should be left arrow
            printf("izquierda");
            break;
        case 0x00:
            break;
        default:
            printf("%X %x\n", c, c);
            break;
        }
    }
    printf(".." " \x25 " "a");
    return 0;
}
