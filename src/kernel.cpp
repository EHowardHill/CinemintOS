#include <stdint.h>

#include "include/consts.h"
#include "include/vectors.h"
#include "include/memorys.h"
#include "include/screens.h"
#include "include/io.h"

extern "C" void kernel_main(multiboot_info *mbi)
{
    cls();

    print_string("Howdy! Welcome to Cinemint OS!\n", VGA_COLOR_LIGHT_CYAN);
    print_string("Free Memory: ");
    print_int(mbi->mem_lower + mbi->mem_upper);
    print_string("\n");

    while (true)
    {
        vector<char> i;
        print_string("- ", VGA_COLOR_LIGHT_BLUE);
        input(i);
        print_char('\n');
    }
}
