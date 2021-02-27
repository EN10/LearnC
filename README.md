# Learn C

**[HelloWorld.c](https://github.com/EN10/LearnC/blob/main/HelloWorld.c)**

    #include <stdio.h>
    int main()
    {
        printf("Hello, World!\n");
        return 0;
    }


**[Main Data Types:](https://github.com/EN10/LearnC/blob/main/DataTypes.c)**

    int x = 3;
    float y = 3.14;
    char z[] = "p";
    
    printf("%d",x);
    printf("%f",y);
    printf("%s",z);

**[String Functions:](https://github.com/EN10/LearnC/blob/main/StringFunctions.c)**

    char name[] = "John Smith";
    strlen(name);
    strncmp(name, "John Smith");
    
    char dest[] = "Hello";
    char src[] = " World";
    strncat(dest,src,-1);

**[Reading Strings:](https://github.com/EN10/LearnC/blob/main/ReadingStrings.c)**

    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    
### REF:

* [Learn C](https://www.learn-c.org/en/Welcome)
* [C Strings](https://www.programiz.com/c-programming/c-strings)
* [Online C Compiler](https://www.programiz.com/c-programming/online-compiler)
