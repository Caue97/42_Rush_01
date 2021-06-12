#include "borders.h"
#include <unistd.h>

char    can_place_box(t_position *table, int cur_pos, char box)
{
    if ()
}

void    fill_table(t_position *table, int cur_pos)
{
    char    box;

    if (cur_pos == 16)
        print_table(table);
    else
    {
        box = '1';
        while (box <= '4')
        {
            if (can_place_box(table, cur_pos, box))
            {
                table[cur_pos] = box;
                fill_table(table, cur_pos + 1);
            }
            ++box;
        }
    }
}

int    main(int argc, char *argv[])
{
    t_position    table[16];

    fill_table(table, 0);
    return (0);
}