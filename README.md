# 42ft_printf
Create your own printf function in C | 42 Türkiye - Istanbul Campus
# What Have I Learnt?

### **`va_arg(args, int)`**

- **Purpose:** This macro retrieves the next argument in the variable argument list (`args`) as a specific type (`int` in this case).
- **How it works:**
    - `args` is the list of arguments managed by the macros.
    - `int` specifies the type of the next argument to fetch.
    - Example: If you call `ft_printf("%d %c", 42, 'A')`, `va_arg(args, int)` will retrieve the integer `42` first, then `va_arg(args, int)` will retrieve the character `'A'` (promoted to `int` during function call).

---

### **`va_list args` → `int ft_check(va_list args, char c)`**

- **`va_list` definition:** A type for the argument list pointer used in variable argument functions.
- **In `ft_check`:**
    - `args` is passed into the function to access the variable arguments.
    - The function `ft_check` uses this list to fetch values based on the format specifier (`c`), such as `%d`, `%s`, or `%p`.
    - It processes the fetched argument and uses helper functions (e.g., `ft_putnbr`, `ft_putchar`) to print the values accordingly.

---

### **`va_start(args, str)`**

- **Purpose:** Initializes the variable argument list pointer `args`.
- **How it works:**
    - The first argument (`str`) is the last named argument of the function.
    - The macro sets `args` to point to the first unnamed (variable) argument.
- **In `ft_printf`:** This prepares the `args` list for iteration so it can be accessed by `va_arg`.

---

### **`va_end(args)`**

- **Purpose:** Cleans up the variable argument list.
- **How it works:**
    - Ends traversal of the `args` list.
    - Must always be paired with `va_start` to avoid undefined behavior.
- **In `ft_printf`:** Ensures the argument list is closed properly after all arguments have been processed.

---

### **`int ft_printf(const char *str, ...)`**

- **Definition:**
    - A custom implementation of the standard `printf` function.
    - The ellipsis (`...`) indicates that the function accepts a variable number of arguments.
- **How it works:**
    1. Iterates through the `str` format string.
    2. Encounters `%` and delegates processing of the next character (specifier) to `ft_check`.
    3. Prints regular characters or results of processed arguments using helper functions like `ft_putchar`.
    4. Returns the total number of characters printed.
