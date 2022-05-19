# **printf**
![image](https://user-images.githubusercontent.com/101451046/169172253-9eed0b39-77a4-46c5-b6a6-c4395a26616e.png)

## **Description**

This _print() function produces output according to a format which is described below.

This function writes its output to the stdout. Upon successful return, this function returns the number of characters printed.

If an output error is encountered, a negative value is returned.

The format specifiers are:

 _printf("Length:[%d, %i]\n", len, len);
 
    printf("Length:[%d, %i]\n", len2, len2);
    
    _printf("Negative:[%d]\n", -762534);
    
    printf("Negative:[%d]\n", -762534);
    
    _printf("Unsigned:[%u]\n", ui);
    
    printf("Unsigned:[%u]\n", ui);
    
    _printf("Unsigned octal:[%o]\n", ui);
    
    printf("Unsigned octal:[%o]\n", ui);
    
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    
    _printf("Character:[%c]\n", 'H');
    
    printf("Character:[%c]\n", 'H');
    
    _printf("String:[%s]\n", "I am a string !");
    
    printf("String:[%s]\n", "I am a string !");
    
    _printf("Address:[%p]\n", addr);
    
    printf("Address:[%p]\n", addr);
    
    len = _printf("Percent:[%%]\n");
    
    len2 = printf("Percent:[%%]\n");
    
    _printf("Len:[%d]\n", len);
    
    printf("Len:[%d]\n", len2);
    
    _printf("Unknown:[%r]\n");
    
    printf("Unknown:[%r]\n");
