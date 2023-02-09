import tkinter as tk

def change_text(button):
    if button["text"] == "Click Me":
        button["text"] = "Text Changed"
    else:
        button["text"] = "Click Me"

root = tk.Tk()
root.title("Tkinter Example")

button = tk.Button(root, text="Click Me", command=lambda: change_text(button))
button.pack()

root.mainloop()
