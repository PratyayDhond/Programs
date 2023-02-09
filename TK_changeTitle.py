import tkinter as tk

def changetitle():
	print(root.title())
	if root.title() == "Title Changed!":
		root.title("Original Title")
	else:
		root.title("Title Changed!")

root = tk.Tk()
root.geometry('300x300')
root.title("Original Title")

button = tk.Button(root, text="Click me!", command=changetitle)
button.pack()

root.mainloop()