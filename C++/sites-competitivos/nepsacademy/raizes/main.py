import math

def main():
    n = int(input())
    # print(f"O número é: {n}")
    numeros = list(map(float, input().split()))[:n]
    # print(numeros)
    for i in range(len(numeros)):
        numeros[i] = math.sqrt(numeros[i])
    for i in range(len(numeros)):
        print(f"{numeros[i]:.4f}")


if __name__ == "__main__":
    main()