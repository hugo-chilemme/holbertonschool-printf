 ```mermaid
flowchart TD
   subgraph _print_char
      start_pch("Begin")
      start_pch --> input_pch[/"Input: va_list arg"/]
      input_pch --> func_pch["_putchar((char) va_arg(arg, int))"]
      func_pch --> stop_pch("End")
    end

    subgraph _print_int
      start_pi("Begin")
        
      start_pi --> input_pi[/"Input:\nva_list arg"/]
      input_pi --> iniz_pi["Initialize :\nint m, a, val"]
      
      input_pi --> if0{"is\nval == INT_MIN"} -- TRUE --> func0["_print_INT_MIN()"]
      if0 --> if1{"is\nval > INT_MIN && val < INT_MAX"} -- TRUE --> func0["_print_INT_MIN()"] --> ternary0
      if1 --> if2{"is\nval < INT_MIN"} -- TRUE --> func5["a = 0"]
      if2 --> if3{"is\nval < INT_MIN + 1024"} -- TRUE --> func6["a += 1"]
      if3 --> if4{"is\nval > INT_MAX - 1024 && val < INT_MAX"} -- TRUE --> func6 --> ternary0
      if4 --> if5{"is\nval > INT_MAX"} -- TRUE --> func6
      if5 --> if6{"is\nval <= INT_MAX"} -- TRUE --> func6
      if6 --> if7{"is\nval < 0"} -- TRUE --> func7["a += _putchar('-');"] --> ternary0
      
      ternary0{"val = val > 0 ? val : val * -1"} --> func1["parse_int(val, val, 1, &m)"]
      func1 --> stop_pi("End")
    end


    subgraph _print_str
      start_str("Begin")
        
      start_str --> input_str[/"Input:\nva_list arg"/]
      input_str --> iniz_str["Initialize :\nlen\nchar* s"]
      iniz_str --> ifs0{"s == NULL"} -- true --> stop_str
      ifs0 --> while{*s != '\0'} -- true --> func_st0["len += _putchar(*s++)"]
      while .-> comm1["While"]
      while --> stop_str("End")
    end
  ```
