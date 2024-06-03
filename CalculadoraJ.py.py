import tkinter as tk

class CalculatorApp:
    def __init__(self, master):
        self.master = master
        master.title("Calculadora")
        master.configure(bg="black")  

        self.result_var = tk.StringVar()
        self.result_var.set("0")
        self.current_num = ""

        self.create_widgets()

    def create_widgets(self):
        
        self.result_label = tk.Label(self.master, textvariable=self.result_var, font=("Arial", 24), bd=5, relief=tk.SUNKEN, anchor=tk.E, bg="black", fg="white")  
        self.result_label.grid(row=0, column=0, columnspan=4, sticky="nsew")

        buttons = [
            ('7', 1, 0), ('8', 1, 1), ('9', 1, 2), ('/', 1, 3),
            ('4', 2, 0), ('5', 2, 1), ('6', 2, 2), ('*', 2, 3),
            ('1', 3, 0), ('2', 3, 1), ('3', 3, 2), ('-', 3, 3),
            ('0', 4, 0), ('C', 4, 1), ('=', 4, 2), ('+', 4, 3)
        ]

        for (text, row, col) in buttons:
            if text.isdigit():  
                button = tk.Button(self.master, text=text, font=("Arial", 18), command=lambda t=text: self.on_button_click(t), bg="gray", fg="black")
            else:  
                button = tk.Button(self.master, text=text, font=("Arial", 18), command=lambda t=text: self.on_button_click(t), bg="orange", fg="black")
            button.grid(row=row, column=col, sticky="nsew")
        
        for i in range(5):
            self.master.grid_rowconfigure(i, weight=1)
            self.master.grid_columnconfigure(i, weight=1)

    def on_button_click(self, value):
        if value.isdigit() or value == '.':
            self.current_num += value
        elif value == 'C':
            self.current_num = ""
            self.result_var.set("0")
        elif value == '=':
            try:
                result = eval(self.current_num)
                self.result_var.set(str(result))
                self.current_num = str(result)
            except:
                self.result_var.set("Error")
        else:
            self.current_num += value

        self.update_display()

    def update_display(self):
        if self.current_num == "":
            self.result_var.set("0")
        else:
            self.result_var.set(self.current_num)


def main():
    root = tk.Tk()
    app = CalculatorApp(root)
    root.mainloop()

if __name__ == "__main__":
    main()
