#include <stdio.h>

#ifdef HAVE_GETTEXT
#include <locale.h>
#include <libintl.h>
#else
#define gettext(X) (X)
#define ngettext(S, P, N) (((N) == 1) ? S : P)
#endif

#define _(String) gettext (String)
#define gettext_noop(String) String
#define N_(String) gettext_noop (String)

int main()
{
#ifdef HAVE_GETTEXT
    setlocale(LC_ALL, "");
    bindtextdomain("test_intl", "locale");
    textdomain("test_intl");
#endif
    printf(_("test %s"), "World");
    printf("\n");
    return 0;
}
