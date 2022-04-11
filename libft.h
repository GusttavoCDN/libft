/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:18:50 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/10 23:28:09 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Functions from <ctype.h> library

/**
 * @brief This functions verify if a char is Alphanumeric
 */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/**
 * @brief This functions converts a lower case character
 * to upper case
 * @param c character to be convert
 */
int		ft_toupper(int c);

/**
 * @brief This functions converts a upper case character
 * to lower case
 * @param c character to be convert
 */
int		ft_tolower(int c);

// BSD library functions

size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief This functions copys a string from a src to a dst buffer.
 *
 * @param dst The buffer where the string will be copied
 * @param src The source string that will be copied
 * @param size The size of the source string without the '\0'
 * @return Return the lenght of the string that is triend to be copied.
 * Dont count the NULL terminator.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief This functions scan an string searching for a substring at n bytes
 *
 * @param big The string to scan
 * @param little The string to search for in the big
 * @param len The n bytes where to searching for the substring
 * @return Returns a pointer to the start of the substring at the string.
 * Returns NULL if the substring is not found. Returns the original string if
 * we pass an empty substring
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

// Function from <string.h> library

/**
* @brief Return the lenght of a string. Dont' count the '\0' (null character).
*/
size_t	ft_strlen(const char *s);

/**
 * @brief This functions founds an c character in a string.
 *
 * @param s The string to search
 * @param c The caracter to search for in the string
 * @return Returns a pointer to the character if found.
 *  Returns NULL if not found.
 * If c == '\0' returns a pointer to the end of the string.
 */
char	*ft_strchr(const char *str, int c);

/**
 * @brief This functions founds the last ocorrence of an c character in a string.
 *
 * @param s The string to search
 * @param c The caracter to search for in the string
 * @return Returns a pointer to the last ocorrence
 * of the character if found.
 *  Returns NULL if not found.
 * If c == '\0' returns a pointer to the end of the string.
 */
char	*ft_strrchr(const char *str, int c);

/**
* @brief Compares two strings and returns the result for s1 - s2
*
* @param s1 The first string to compare
* @param s2 The second string
* @param n Says until we want to compare the two strings
* @return The result of the comparison
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
* @brief This functions fill the n bytes of a string with the C parameter
* @param s The string that will be filled
* @param c The C parameter to fill. The valor is passed as Int
* but is converted to char
*/
void	*ft_memset(void *s, int c, size_t n);

/**
* @brief This erases in some memory area. Thema are to be
* deleted is passed as n bytes
* @param s The area to be erased
* @param n The number of bytes to be erased
*/
void	ft_bzero(void *s, size_t n);

/**
 * @brief This function copys a memory area to other memory area.
 * Don't use if the memory area might overlap.
 * In this case, use memmove instead.
 * @param dest dest area to receive thec copy
 * @param src source area to copy
 * @param n n bytes that will be copied to dest
 * @return returns a void pointer to dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief This function copies n bytes from memory area src to dest.
 * The memory area may overlap.
 *
 * @param dest Memory area dest for the copied bytes.
 * @param src Memory area to copy from.
 * @param n N bytes to copy.
 * @return Returns a void pointer to dest
 */
void	*ft_memmove(void *dest, void *src, size_t n);

/**
 * @brief This functions concatenate two strings
 * @param dst The string that will act like the buffer to concatenation.
 * @param src The string that will be concatenate to the buffer.
 * @param size This has to be the buffer size in order for the
 * concatenation occurs well.
 * @return The function returns the length of
 * the new string that the buffer will receive.
 * Notice that the return doesn't count
 * the NULL character that has to be in the end.
 */

/**
 * @brief This functions scans until n bytes of a memory area searching for
 * The first instance of c
 * @param str Memory area to looking from
 * @param c Byte to looking for
 * @param n Until bytes we will scan
 * @return Returns a void pointer to the first instance of c or NULL if
 * doesn't found.
 */
void	*ft_memchr(const void *str, int c, size_t n);

/**
 * @brief This function compares two memory area until n bytes
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief This functions returns a pointer to a copy of a
 * string passed as argument
 * @param s The string to be copied
 * @return Returns a pointer to the new string.
 * Returns NULL if insufficient memory is available
 */
char	*ft_strdup(const char *s);

// Functions from <stdlib.h> library

/**
 * @brief This functions allocate an amount of memory and initialize
 * with 0 to use
 * @param nmemb The quantity of elements to allocate
 * @param size The size of each individual element
 * @return Returns a pointer to the allocated memory.
 * If fails, returns NULL.
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief This function converts a string in a number
 */
int		ft_atoi(const char *s);

// "Original" functions from libft

/**
 * @brief This functions allocates with calloc
 * and returns a substring from the string 's'
 * @param s The base string to create a substring from.
 * @param start The start index of the substring
 * @param len The max length of the substring
 * @return Returns the substring or NULL if fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief This functions allocates and returns a new string
 * which is the concatenation of s1 and s2
 *
 * @return Returns the new string or NULL if fails
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief This functions returns a new string with chars
 * specified in set removed from the start and end of the strin
 *
 * @param s1 String to be trimmed.
 * @param set Chars to trim from the strin
 * @return Returns the new string or NULL if malloc fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief This functions returns a trinsg representing the integer receveid
 * as argument. Negative numbers are handled.
 *
 * @param n The integer to convert
 * @return The string representing the integer. NULL if malloc fails.
 */
char	*ft_itoa(int n);

/**
 * @brief Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive application of "F"
 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications of "F"
 */
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));

/**
 * @brief This function applies the function "f" on each character of
 * the string passed as argument, passing its index as first
 * argument. Each character is passed by address to "f"
 * to be modified if necessary
 *
 * @param s The string on which to iterate
 * @param f The function to apply to each character
 */
void	ft_striteri(char *s, void (*f) (unsigned int, char*));

/**
 * @brief Outputs the char "c" to the given file descriptor
 *
 * @param c The char to output
 * @param fd the file descriptor on which to write
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string "s" to the given file descriptor
 *
 * @param s The string to output
 * @param fd The file descriptor on which to write
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string "s" to the given file descriptor
 * followed by a newline.
 *
 * @param s The string to output
 * @param fd The file descriptor on which to write
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer "n" to the given fd
 *
 * @param n The integer to output
 * @param fd The file descriptor on which to write
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief This function returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must end with a NULL pointer.
 *
 * @param s The string to be split
 * @param c	he delimiter character.
 * @return The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c);

// Functions to handle linked lists

/**
 * @brief This functions returns a new node.
 * The member variable "content"
 * is initialized with the value of the parameter "content".
 * The variable "next" is initialized
 * To NULL
 * @param content  The content to create the new node with
 * @return The new node
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Adds the node ’new’ at the beginning of the list.
 *
 * @param lst The addes of a pointer to the first link of a list
 * @param new The adress of a pointer to the node
 * to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
#endif
