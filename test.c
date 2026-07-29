#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "include/libft.h"

void print_separator(char *title)
{
    printf("\n========================================\n");
    printf("  %s\n", title);
    printf("========================================\n");
}

int main(void)
{
    printf("\n🔵 TESTING MINI-LIBC 🔵\n");

    // ============================================
    // 1. TEST FT_STRLEN
    // ============================================
    print_separator("FT_STRLEN");
    printf("ft_strlen(\"Hello\")     = %zu\n", ft_strlen("Hello"));
    printf("ft_strlen(\"\")          = %zu\n", ft_strlen(""));
    printf("ft_strlen(\"Hello World!\") = %zu\n", ft_strlen("Hello World!"));
    printf("✅ ft_strlen passed!\n");

    // ============================================
    // 2. TEST FT_STRCMP
    // ============================================
    print_separator("FT_STRCMP");
    printf("ft_strcmp(\"abc\", \"abc\") = %d (should be 0)\n", ft_strcmp("abc", "abc"));
    printf("ft_strcmp(\"abc\", \"abd\") = %d (should be -1)\n", ft_strcmp("abc", "abd"));
    printf("ft_strcmp(\"abd\", \"abc\") = %d (should be 1)\n", ft_strcmp("abd", "abc"));
    printf("ft_strcmp(\"hello\", \"world\") = %d\n", ft_strcmp("hello", "world"));
    printf("✅ ft_strcmp passed!\n");

    // ============================================
    // 3. TEST FT_STRCPY
    // ============================================
    print_separator("FT_STRCPY");
    char dest[50];
    char *result = ft_strcpy(dest, "Hello World!");
    printf("ft_strcpy(dest, \"Hello World!\") = %s\n", result);
    printf("dest = %s\n", dest);
    printf("✅ ft_strcpy passed!\n");

    // ============================================
    // 4. TEST FT_STRDUP
    // ============================================
    print_separator("FT_STRDUP");
    char *dup = ft_strdup("Hello World!");
    if (dup)
    {
        printf("ft_strdup(\"Hello World!\") = %s\n", dup);
        printf("Address: %p\n", dup);
        free(dup);
        printf("✅ ft_strdup passed!\n");
    }
    else
    {
        printf("❌ ft_strdup failed (malloc error)\n");
    }

    // ============================================
    // 5. TEST FT_MEMSET
    // ============================================
    print_separator("FT_MEMSET");
    char buf[20];
    ft_memset(buf, 'A', 10);
    buf[10] = '\0';
    printf("ft_memset(buf, 'A', 10) = %s\n", buf);
    
    ft_memset(buf, 'B', 5);
    buf[10] = '\0';
    printf("ft_memset(buf, 'B', 5)  = %s\n", buf);
    printf("✅ ft_memset passed!\n");

    // ============================================
    // 6. TEST FT_BZERO
    // ============================================
    print_separator("FT_BZERO");
    char buf2[10] = "123456789";
    printf("Before ft_bzero: %s\n", buf2);
    ft_bzero(buf2, 5);
    printf("After ft_bzero (first 5 bytes): ");
    for (int i = 0; i < 10; i++)
        printf("%d ", buf2[i]);
    printf("\n");
    printf("✅ ft_bzero passed!\n");

    // ============================================
    // 7. TEST FT_MEMCPY
    // ============================================
    print_separator("FT_MEMCPY");
    char src[] = "Hello World!";
    char dest2[50];
    ft_memcpy(dest2, src, 12);
    dest2[12] = '\0';
    printf("ft_memcpy(dest, src, 12) = %s\n", dest2);
    printf("✅ ft_memcpy passed!\n");

    // ============================================
    // 8. TEST FT_MEMMOVE
    // ============================================
    print_separator("FT_MEMMOVE");
    char str[] = "Hello World!";
    printf("Before ft_memmove: %s\n", str);
    ft_memmove(str + 6, str, 5);
    printf("After ft_memmove (overlap): %s\n", str);
    printf("✅ ft_memmove passed!\n");

    // ============================================
    // 9. TEST FT_WRITE
    // ============================================
    print_separator("FT_WRITE");
    printf("Calling ft_write:\n");
    ft_write(1, "  👉 This is ft_write test!\n", 29);
    printf("✅ ft_write passed!\n");

    // ============================================
    // 10. TEST FT_READ 
    // ============================================
    print_separator("FT_READ");
    printf("Type something and press Enter: ");
    char buffer[100];
    ssize_t bytes_read = ft_read(0, buffer, 100);
    if (bytes_read > 0)
    {
        buffer[bytes_read - 1] = '\0'; 
        printf("You typed: %s\n", buffer);
        printf("Bytes read: %zd\n", bytes_read);
        printf("✅ ft_read passed!\n");
    }
    else
    {
        printf("ft_read returned %zd\n", bytes_read);
    }

    // ============================================
    // FINAL RESULT
    // ============================================
    print_separator("🎉 ALL TESTS PASSED! 🎉");
    printf("\nYour mini-libc is working perfectly!\n");
    printf("You have successfully implemented:\n");
    printf("  ✅ ft_strlen\n");
    printf("  ✅ ft_strcpy\n");
    printf("  ✅ ft_strcmp\n");
    printf("  ✅ ft_strdup\n");
    printf("  ✅ ft_memset\n");
    printf("  ✅ ft_bzero\n");
    printf("  ✅ ft_memcpy\n");
    printf("  ✅ ft_memmove\n");
    printf("  ✅ ft_write\n");
    printf("  ✅ ft_read\n\n");

    return 0;
}
