```mermaid
flowchart TD

      subgraph _find_type
        start_ft("Begin")
        start_ft --> input_ft[/"Input:\nchar c\nva_list arg"/]
        input_ft --> iniz_ft["Initialize :\nint len, index\n struct formats list[]"]
        iniz_ft --> while1_ft{"is \n index > 3"}
        txt00["While"] -.-> while1_ft
        while1_ft --> if1_ft{"is *list[index].t == c"}
        if1_ft --> return1_ft["Return list[index].f(arg)"]
        return1_ft -.->  _print_str
        return1_ft -.->  _print_int
        return1_ft -.->  _print_char
        return1_ft --> adding_ft["index++"]
        adding_ft -.-> while1_end_ft["end while"]
        while1_end_ft --> if2_ft{"c != '%'"}
        if2_ft -- true --> func_ft_1["_putchar('%')"]
        func_ft_1 .-> _putchar
        iniz_ft --> func_ft["_putchar((char) va_arg(arg, int))"] -..-> _putchar
        if2_ft --> adding_ft2["len++"]
        adding_ft2 --> func_ft2["_putchar(c)"]
        func_ft2 -.-> _putchar
        func_ft2 --> stop_ft("End")
      end
      
      subgraph _print_char
        start_pch("Begin")
        start_pch --> input_pch[/"Input: va_list arg"/]
        input_pch --> func_pch["_putchar((char) va_arg(arg, int))"] -..-> _putchar
        func_pch --> stop_pch("End")
      end
      
      subgraph _print_int
        start_pi("Begin")
        start_pi --> input_pi[/"Input: va_list arg"/]
        input_pi --> func_pi["_putchar((char) va_arg(arg, int))"] -..-> _putchar
        func_pi --> stop_pi("End")
      end
      
      subgraph _print_str
        start_ps("Begin")
        start_ps --> input_ps[/"Input: va_list arg"/]
        input_ps --> iniz_ps["Initialize :\nint len\nchar *char"]
        iniz_ps --> func_ps["_putchar((char) va_arg(arg, int))"] -..-> _putchar
        func_ps --> stop_ps("End")
      end
     
     subgraph _printf
        start_pf("Begin")
        start_pf --> input_pf[/"Input:\nchar *format\n..."/]
        input_pf --> iniz_pf["Initialize :\nva_list a\n int len, i, totalLength"]
        iniz_pf --> if1_pf{"is \n !format"} -.-> stop_pf
        
        stop_pf("End")
        
      end
      
      subgraph _putchar
        start_pc("Begin")
        start_pc --> input_pc[/"Input: char c"/]
        input_pc --> func_pc["write(1, &c, 1)"]
        func_pc --> stop_pc("End")
     end
