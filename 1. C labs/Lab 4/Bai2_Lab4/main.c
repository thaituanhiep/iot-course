#include <stdio.h>
#include <stdlib.h>

enum Company {
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT
};

int main()
{
    enum Company myCompany = FACEBOOK;
    if (myCompany == FACEBOOK) {
        printf("FACEBOOK");
    }
    return 0;
}
