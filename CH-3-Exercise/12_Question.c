/*

Ques.12. Find out the memory size consumed by variables of each of the data types?
 
Ans. Example Table for Memory Sizes of Common Data Types:

Data Type	                     Typical Size (Bytes)	                                 Notes
int	                                 4 bytes	                                   32-bit or 64-bit systems
long	                       4 bytes (32-bit), 8 bytes (64-bit)	                 Platform-dependent
short	                              2 bytes	
float	                              4 bytes	
double	                              8 bytes	
long double	                          8-16 bytes	                                  Platform-dependent
char	                              1 byte	
wchar_t	                              2-4 bytes	                           Platform-dependent (e.g., 2 bytes on Windows, 4 bytes on Linux)
bool	                              1 byte	
string	                    Varies (depends on length + overhead)	         Typically dynamic memory allocation
pointer	                       4 bytes (32-bit), 8 bytes (64-bit)	            Depends on system architecture
reference	                   4 bytes (32-bit), 8 bytes (64-bit)	                   Similar to pointer

Notes:
1. In most modern systems, memory alignment (e.g., aligning data types to multiples of 2 or 4 bytes) can influence the memory size slightly, 
especially for structures and classes.

2. The size of string depends heavily on the number of characters and the encoding used. 
For example, UTF-8 encoded characters may vary in size, with each character taking 1 to 4 bytes depending on the character.


*/