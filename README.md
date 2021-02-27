# Learn C

**HelloWorld.c**

    #include <stdio.h>
    int main()
    {
        printf("Hello, World!\n");
        return 0;
    }


**Main Data Types:**

    int x = 3;
    float y = 3.14;
    char z[] = "p";
    
    printf("%d",x);
    printf("%f",y);
    printf("%s",z);

**String Functions:**

    char name[] = "John Smith";
    strlen(name);
    strncmp(name, "John Smith");
    
    char dest[] = "Hello";
    char src[] = " World";
    strncat(dest,src,-1);

**Reading Strings:**

    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    
### REF:

* [Learn C](https://www.learn-c.org/en/Welcome)
* [C Strings](https://www.programiz.com/c-programming/c-strings)
* [Online C Compiler](https://www.programiz.com/c-programming/online-compiler)
