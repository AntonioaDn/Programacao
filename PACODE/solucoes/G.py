rg = int(input(""))
for i in range(rg):
    x1, y1, x2, y2, x3, y3 = map(float, input("").split())
    produto_cruzado = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)
    if produto_cruzado == 0:
        print("TOUCH")
    elif produto_cruzado > 0:
        print("LEFT")
    else:
        print("RIGHT")