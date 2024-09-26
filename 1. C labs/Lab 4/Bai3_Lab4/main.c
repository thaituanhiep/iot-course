#include <stdio.h>
#include <stdlib.h>

enum Company {
    GOOGLE,
    EBAY,
    XEROX,
    YAHOO,
    FACEBOOK,
    MICROSOFT
};

int main()
{
    enum Company google = GOOGLE;
    enum Company facebook = FACEBOOK;
    enum Company xerox = XEROX;
    enum Company yahoo = YAHOO;
    enum Company ebay = EBAY;
    enum Company microsoft = MICROSOFT;

    printf("The value of google is: %d\n", GOOGLE);
    printf("The value of facebook is: %d\n", FACEBOOK);
    printf("The value of xerox is: %d\n", XEROX);
    printf("The value of yahoo is: %d\n", YAHOO);
    printf("The value of ebay is: %d\n", EBAY);
    printf("The value of microsoft is: %d\n", MICROSOFT);
    return 0;
}
