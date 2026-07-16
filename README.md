## Escape Sequences

```c
\n  New Line
\t  Tab
\b  Backspace
""  Double Quotes
\\  Backslash
```

## Integer and Float Division

```c
int/int     = int
float/int   = float
int/float   = float
float/float = float
```

# C Operator Precedence and Associativity

| Precedence | Operator | Description | Associativity |
|------------|----------|-------------|---------------|
| 1 | `()` `[]` `.` `->` `++` `--` | Function call, Array subscript, Dot, Structure pointer, Postfix increment/decrement | Left-to-Right |
| 2 | `++` `--` `+` `-` `!` `~` `(type)` `*` `&` `sizeof` | Prefix increment/decrement, Unary, Cast, Dereference, Address-of, Sizeof | Right-to-Left |
| 3 | `*` `/` `%` | Multiplication, Division, Modulus | Left-to-Right |
| 4 | `+` `-` | Addition, Subtraction | Left-to-Right |
| 5 | `<<` `>>` | Bitwise Shift | Left-to-Right |
| 6 | `<` `<=` `>` `>=` | Relational | Left-to-Right |
| 7 | `==` `!=` | Equality | Left-to-Right |
| 8 | `&` | Bitwise AND | Left-to-Right |
| 9 | `^` | Bitwise XOR | Left-to-Right |
| 10 | `\|` | Bitwise OR | Left-to-Right |
| 11 | `&&` | Logical AND | Left-to-Right |
| 12 | `\|\|` | Logical OR | Left-to-Right |
| 13 | `?:` | Ternary | Right-to-Left |
| 14 | `=` `+=` `-=` `*=` `/=` `%=` `&=` `^=` `\|=` `<<=` `>>=` | Assignment | Right-to-Left |
| 15 | `,` | Comma | Left-to-Right |

## Easy Trick

**PUMA'S REBL TAC**

- **P** = Postfix
- **U** = Unary
- **M** = Multiplicative
- **A** = Additive
- **S** = Shift
- **R** = Relational
- **E** = Equality
- **B** = Bitwise
- **L** = Logical
- **T** = Ternary
- **A** = Assignment
- **C** = Comma
