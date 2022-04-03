![image](https://user-images.githubusercontent.com/63557097/161452147-4ac34708-88e3-480d-b181-7a15018b9da5.png)

# Libft -> 115% (June/2021)
It's a first project as a student at 42. If you need recode he C standard library, as well as some other utility functions that you will use throughout the course.

# Functions 
<table>
    <thead>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a>ft_isalnum</a></td>
            <td>Checks whether the passed character is alphanumeric.</td>
        </tr>
        <tr>
            <td><a>ft_isalpha</a></td>
            <td>Checks whether the passed character is alphabetic.</td>
        </tr>
        <tr>
            <td><a>ft_isascii</a></td>
            <td>Checks whether the passed character is ASCII.</td>
        </tr>
        <tr>
            <td><a>ft_isdigit</a></td>
            <td>Checks whether the passed character is decimal digit.</td>
        </tr>
        <tr>
            <td><a>ft_isprint</a></td>
            <td>Checks whether the passed character is printable.</td>
        </tr>
        <tr>
            <td><a>ft_tolower</a></td>
            <td>Converts uppercase letters to lowercase.</td>
        </tr>
        <tr>
            <td><a>ft_toupper</a></td>
            <td>Converts lowercase letters to uppercase.</td>
        </tr>
    </tbody>
    <tbody>
        <tr>
            <td><a>ft_bzero</a></td>
            <td>Erases the data in the n bytes of the memory block. (Write zeroes)</td>
        </tr>
        <tr>
            <td><a>ft_memchr</a></td>
            <td>Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string.</td>
        </tr>
        <tr>
            <td><a>ft_memcmp</a></td>
            <td>Compares the first n bytes of str1 and str2.</td>
        </tr>
        <tr>
            <td><a>ft_memcpy</a></td>
            <td>Copies n characters from src to dest.</td>
        </tr>
        <tr>
            <td><a>ft_memmove</a></td>
            <td>Copies n characters from src to dest. (Non destructive manner)</td>
        </tr>
        <tr>
            <td><a>ft_memset</a></td>
            <td>Copies the character c (an unsigned char) to the first n characters of the string.</td>
        </tr>
        <tr>
            <td><a>ft_strchr</a></td>
            <td>Searches for the first occurrence of the character c (an unsigned char) in the string.</td>
        </tr>
        <tr>
            <td><a>ft_strlcat</a></td>
            <td>Appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters.</td>
        </tr>
        <tr>
            <td><a>ft_strlcpy</a></td>
            <td>Copies up to dstsize - 1 characters from the string src to dst.</td>
        </tr>
        <tr>
            <td><a>ft_strlen</a></td>
            <td>Computes the length of the string but not including the terminating null character.</td>
        </tr>
        <tr>
            <td><a>ft_strncmp</a></td>
            <td>Compares at most the first n bytes of str1 and str2.</td>
        </tr>
        <tr>
            <td><a>ft_strnstr</a></td>
            <td>Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.</td>
        </tr>
        <tr>
            <td><a>ft_strrchr</a></td>
            <td>Searches for the last occurrence of the character c (an unsigned char) in the string.</td>
        </tr>
    </tbody>
    <tbody>
        <tr>
            <td><a>ft_atoi</a></td>
            <td>Converts the string to an integer (type int).</td>
        </tr>
        <tr>
            <td><a>ft_calloc</a></td>
            <td>Allocates the requested memory initialized to zero bytes.</td>
        </tr>
    </tbody>
    <tbody>
        <tr>
            <td><a>ft_itoa</a></td>
            <td>Converts the int to a string (type char *).</td>
        </tr>
        <tr>
            <td><a>ft_putchar_fd</a></td>
            <td>Outputs the character 'c' to the given file descriptor.</td>
        </tr>
        <tr>
            <td><a>ft_putendl_fd</a></td>
            <td>Outputs the string 's' to the given file descriptor, followed by a newline.</td>
        </tr>
        <tr>
            <td><a>ft_putnbr_fd</a></td>
            <td>Outputs the integer 'n' to the given file descriptor.</td>
        </tr>
        <tr>
            <td><a>ft_putstr_fd</a></td>
            <td>Outputs the string 's' to the given file descriptor.</td>
        </tr>
        <tr>
            <td><a>ft_strdup</a></td>
            <td>Returns a pointer to a null-terminated byte string, which is a duplicate of the string.</td>
        </tr>
        <tr>
            <td><a>ft_striteri</a></td>
            <td>Applies a function to each character of the string.</td>
        </tr>
        <tr>
            <td><a>ft_strjoin</a></td>
            <td>Returns a new string, which is the result of the concatenation of 's1' and 's2'.</td>
        </tr>
        <tr>
            <td><a>ft_strmapi</a></td>
            <td>Applies a function to each character of the string 's' to create a new string.</td>
        </tr>
        <tr>
            <td><a>ft_strtrim</a></td>
            <td>Returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.</td>
        </tr>
        <tr>
            <td><a>ft_substr</a></td>
            <td>Returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.</td>
        </tr>
    </tbody>
    <tbody>
        <tr>
            <td><a>ft_lstadd_back</a></td>
            <td>Adds the element at the end of the list.</td>
        </tr>
        <tr>
            <td><a>ft_lstadd_front</a></td>
            <td>Adds the element at the beginning of the list.</td>
        </tr>
        <tr>
            <td><a>ft_lstclear</a></td>
            <td>Deletes and frees the given element and every successor of that element, using a given function and free.</td>
        </tr>
        <tr>
            <td><a>ft_lstdelone</a></td>
            <td>Takes as a parameter an element and frees the memory of the element’s content using a function given as a parameter and free the element.</td>
        </tr>
        <tr>
            <td><a>ft_lstiter</a></td>
            <td>Iterates the list and applies a function to the content of each element.</td>
        </tr>
        <tr>
            <td><a>ft_lstlast</a></td>
            <td>Returns the last element of the list.</td>
        </tr>
        <tr>
            <td><a>ft_lstmap</a></td>
            <td>Iterates the list and applies a function to the content of each element. Creates a new list resulting of the successive applications of the function. A 'del' function is used to delete the content of an element if needed.</td>
        </tr>
        <tr>
            <td><a>ft_lstnew</a></td>
            <td>Returns a new element.</td>
        </tr>
        <tr>
            <td><a>ft_lstsize</a></td>
            <td>Counts the number of elements in a list.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
