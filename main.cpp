#include <iostream>
#include <string.h>
#include "jsonparser.h"
using namespace std;

int main()
{
    char input[256];
    char check[32];
    cin.getline(input,256);
    while(strcmp(input,"exit") != 0)
    {
        strcpy(check,input);
        check[4] = 0;
        if(strcmp(check,"open") == 0)
        {

        }
        strcpy(check,input);
        check[5] = 0;
        if(strcmp(check,"close") == 0)
        {

        }
        strcpy(check,input);
        check[4] = 0;
        if(strcmp(check,"save") == 0)
        {

        }
        strcpy(check,input);
        check[6] = 0;
        if(strcmp(check,"saveas") == 0)
        {

        }
        cin.getline(input,256);
    }
    return 0;
}
