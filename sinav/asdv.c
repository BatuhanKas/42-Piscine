int i = 0;
    int j = 0;
    
    char str[] = "           dljdjkojd,suısdı";
    
    while(str[i] == ' ' || str[i] == '\0' || str[i] == '\t'){
        i++;
    }
/*
    while(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' || str[i] <= 'Z')
    {
        i++;
    }
*/
    while(str[i] != ' ' && str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    return (j);