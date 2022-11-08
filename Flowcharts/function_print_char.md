```mermaid

  flowchart TD
  Start("Start _print_char") --> args[/"va_list arg"/]
  args --> putchar["_putchar((char) arg)"] --> End("End")
  
```
