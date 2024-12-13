#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char ch[100];

    printf("パスワードを入力してください: ");
    scanf("%s",ch);

    int a = 0, b = 0, c = 0;
    int length = strlen(ch);

    for (int i = 0; i < length; i++) {
        if (isupper(ch[i])) {
            a = 1;
        }
        else if (islower(ch[i])) {
            b = 1;
        }
        else if (isdigit(ch[i])) {
            c = 1;
        }
    }

    if (length >= 8 && a == 1 && b == 1 && c == 1) {
        printf("このパスワードは強固です！\n");
    }
    if (a == 0)
        printf("大文字をパスワード内に入力してください。\n");
    if (b == 0)
        printf("小文字をパスワード内に入力してください。\n");
    if (c == 0)
        printf("数字をパスワード内に入力してください。\n");
    if (length < 7)
        printf("パスワードを８文字以上にしてください。\n");
    return 0;
}