import tkinter as tk
from tkinter import messagebox


def obtener_comision(monto):
    try:
        comision_pct = float(entry_comision.get())
        comision = monto * (comision_pct / 100)
        return comision
    except ValueError:
        raise ValueError("Comision invalida")


def bolivianos_a_soles():
    try:
        bolivianos = float(entry_monto.get())
        compra_usdt_bs = float(entry_compra_usdt_bs.get())
        venta_usdt_soles = float(entry_venta_usdt_soles.get())

        usdt = bolivianos / compra_usdt_bs
        soles = usdt * venta_usdt_soles

        comision = obtener_comision(soles)

        resultado.set(
            f"Con Bs {bolivianos:.2f} puedes recibir:\n"
            f"{usdt:.4f} USDT\n"
            f"S/ {soles:.2f}\n\n"
            f"Comision: S/ {comision:.2f}"
        )

    except ValueError:
        messagebox.showerror("Error", "Ingrese solo numeros validos.")


def soles_a_bolivianos():
    try:
        soles = float(entry_monto.get())
        compra_usdt_bs = float(entry_compra_usdt_bs.get())
        venta_usdt_soles = float(entry_venta_usdt_soles.get())

        usdt = soles / venta_usdt_soles
        bolivianos = usdt * compra_usdt_bs

        comision = obtener_comision(bolivianos)

        resultado.set(
            f"Para recibir S/ {soles:.2f} necesitas:\n"
            f"{usdt:.4f} USDT\n"
            f"Bs {bolivianos:.2f}\n\n"
            f"Comision: Bs {comision:.2f}"
        )

    except ValueError:
        messagebox.showerror("Error", "Ingrese solo numeros validos.")


# Ventana principal
ventana = tk.Tk()
ventana.title("Calculadora Bs - USDT - Soles")
ventana.geometry("430x470")
ventana.resizable(False, False)

# Titulo
tk.Label(
    ventana,
    text="Calculadora Bs <-> USDT <-> Soles",
    font=("Arial", 16, "bold")
).pack(pady=15)

# Monto
tk.Label(ventana, text="Monto a convertir:", font=("Arial", 11)).pack()
entry_monto = tk.Entry(ventana, font=("Arial", 12), justify="center")
entry_monto.pack(pady=5)

# Compra USDT en Bs
tk.Label(
    ventana,
    text="Precio de compra de 1 USDT en Bolivianos:",
    font=("Arial", 11)
).pack()
entry_compra_usdt_bs = tk.Entry(ventana, font=("Arial", 12), justify="center")
entry_compra_usdt_bs.pack(pady=5)

# Venta USDT en Soles
tk.Label(
    ventana,
    text="Precio de venta de 1 USDT en Soles:",
    font=("Arial", 11)
).pack()
entry_venta_usdt_soles = tk.Entry(ventana, font=("Arial", 12), justify="center")
entry_venta_usdt_soles.pack(pady=5)

# Comision
tk.Label(
    ventana,
    text="Comision (%):",
    font=("Arial", 11)
).pack()
entry_comision = tk.Entry(ventana, font=("Arial", 12), justify="center")
entry_comision.pack(pady=5)

# Botones
frame_botones = tk.Frame(ventana)
frame_botones.pack(pady=15)

tk.Button(
    frame_botones,
    text="De Bolivianos a Soles",
    font=("Arial", 11, "bold"),
    width=20,
    command=bolivianos_a_soles
).grid(row=0, column=0, padx=5)

tk.Button(
    frame_botones,
    text="De Soles a Bolivianos",
    font=("Arial", 11, "bold"),
    width=20,
    command=soles_a_bolivianos
).grid(row=0, column=1, padx=5)

# Resultado
resultado = tk.StringVar()
resultado.set("Resultado aparecera aqui.")

tk.Label(
    ventana,
    textvariable=resultado,
    font=("Arial", 12),
    justify="center",
    fg="blue"
).pack(pady=20)

# Nota
tk.Label(
    ventana,
    text="Ingrese precios y comision en porcentaje (ej: 1.5)",
    font=("Arial", 9),
    fg="gray"
).pack(pady=5)

ventana.mainloop()
