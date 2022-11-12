```mermaid
flowchart TD

      subgraph _find_type
        start_ft("Begin")
        start_ft --> input_ft[/"Input:\nchar c\nva_list arg"/]
        input_ft --> iniz_ft["Initialize :\nint len,slength, index\n struct formats list[]"]
        iniz_ft --> for0{"list[slength].t"} .-> comm1["for : \n slength = 0; slength++"]
        for0 --> while1_ft{"is \n index > slength"}
        txt00["While"] -.-> while1_ft
        while1_ft --> if1_ft{"is *list[index].t == c"}
        if1_ft --> return1_ft["Return list[index].f(arg)"]
        return1_ft --> adding_ft["index++"]
        adding_ft -.-> while1_end_ft["end while"]
        while1_end_ft --> if2_ft{"c != '%'"}
        if2_ft -- true --> func_ft_1["_putchar('%')"]
        if2_ft --> adding_ft2["len++"]
        adding_ft2 --> func_ft2["_putchar(c)"]
        func_ft2 --> stop_ft("End")
        func_ft_1 --> stop_ft
      end
  ```
