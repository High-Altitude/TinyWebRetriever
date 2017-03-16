#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
int main()
{
   setbuf(stdout, NULL);
   printf("%s%c%c\n","Content-Type:text/html;charset=iso-8859-1",13,10);
   printf("<html><body><br />PATH_INFO <b>%s</b><br />PATH_TRANSLATED <b>%s</b><br />REMOTE_HOST <b>%s</b><br />REMOTE_ADDR <b>%s</b><br />GATEWAY_INTERFACE <b>%s</b><br />SCRIPT_NAME <b>%s</b><br />REQUEST_METHOD <b>%s</b><br />HTTP_ACCEPT <b>%s</b><br />HTTP_ACCEPT_CHARSET <b>%s</b><br />HTTP_ACCEPT_ENCODING <b>%s</b><br />HTTP_ACCEPT_LANGUAGE <b>%s</b><br />HTTP_FROM <b>%s</b><br />HTTP_HOST <b>%s</b><br />HTTP_REFERER <b>%s</b><br />HTTP_USER_AGENT <b>%s</b><br />QUERY_STRING <b>%s</b><br />SERVER_SOFTWARE <b>%s</b><br />SERVER_NAME <b>%s</b><br />SERVER_PROTOCOL <b>%s</b><br />SERVER_PORT <b>%s</b><br />USER_NAME <b>%s</b><br />USER_PASSWORD <b>%s</b><br />AUTH_TYPE <b>%s</b><br />CONTENT_TYPE <b>%s</b><br />CONTENT_LENGTH <b>%s</b>"
        ,getenv("PATH_INFO")
        ,getenv("PATH_TRANSLATED")
        ,getenv("REMOTE_HOST")
        ,getenv("REMOTE_ADDR")
        ,getenv("GATEWAY_INTERFACE")
        ,getenv("SCRIPT_NAME")
        ,getenv("REQUEST_METHOD")
        ,getenv("HTTP_ACCEPT")
        ,getenv("HTTP_ACCEPT_CHARSET")
        ,getenv("HTTP_ACCEPT_ENCODING")
        ,getenv("HTTP_ACCEPT_LANGUAGE")
        ,getenv("HTTP_FROM")
        ,getenv("HTTP_HOST")
        ,getenv("HTTP_REFERER")
        ,getenv("HTTP_USER_AGENT")
        ,getenv("QUERY_STRING")
        ,getenv("SERVER_SOFTWARE")
        ,getenv("SERVER_NAME")
        ,getenv("SERVER_PROTOCOL")
        ,getenv("SERVER_PORT")
        ,getenv("USER_NAME")
        ,getenv("USER_PASSWORD")
        ,getenv("AUTH_TYPE")
        ,getenv("CONTENT_TYPE")
        ,getenv("CONTENT_LENGTH")
        );
    int leng;
    leng = atoi(getenv("CONTENT_LENGTH"));
    char str[leng];
    str[leng] = '\0';
    read(0, str, leng);
    printf("<br />CONTENT_TEXT <b>%s</b></body></html>", str);
   return 0;
}
