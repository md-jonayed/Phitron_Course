or (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 97;
        printf("%c -> %d\n", value + 'a', count[value]);
    }
    f