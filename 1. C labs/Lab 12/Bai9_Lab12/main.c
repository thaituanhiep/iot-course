#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void JsonExtract(char json[], char hoten[], char gioitinh[], char sodienthoai[], char email[])
{
    char info[4][100];
    int i;

    char* token = strtok(json, ",");

    i = 0;
    while (token != NULL)
    {
        strcpy(info[i], token);
        ++i;
        token = strtok(NULL, ",");
    }

    char* hoten_token = strtok(info[0], ":");
    strcpy(hoten, strtok(NULL, ":"));

    token = strtok(NULL, ",");
    char* gioitinh_token = strtok(info[1], ":");
    strcpy(gioitinh, strtok(NULL, ":"));

    token = strtok(NULL, ",");
    char* sodienthoai_token = strtok(info[2], ":");
    strcpy(sodienthoai, strtok(NULL, ":"));

    token = strtok(NULL, ",");
    char* email_token = strtok(info[3], ":");
    strcpy(email, strtok(NULL, ":"));

    if (email[strlen(email) - 1] == '}')
        email[strlen(email) - 1] = '\0';
}

int main()
{
    char json[] = "{\"hoten\":\"Thai Tuan Hiep\",\"gioitinh\":\"Nam\",\"sodienthoai\":\"0868275261\",\"email\":\"hiepthai12@gmail.com\"}";
    char hoten[100], gioitinh[100], sodienthoai[100], email[100];

    JsonExtract(json, hoten, gioitinh, sodienthoai, email);

    printf("Ho ten      :   %s\n", hoten);
    printf("Gioi tinh   :   %s\n", gioitinh);
    printf("Dien thoai  :   %s\n", sodienthoai);
    printf("Email       :   %s\n", email);
    return 0;
}
