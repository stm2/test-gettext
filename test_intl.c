#include <stdio.h>

#include <locale.h>
#include <libintl.h>

#define _(String) gettext (String)
#define gettext_noop(String) String
#define N_(String) gettext_noop (String)

int main()
{
    setlocale(LC_ALL, "");
    bindtextdomain("test_intl", "locale");
    textdomain("test_intl");

    printf(_("test %s"), "World");
    printf("\n");
    return 0;
}
