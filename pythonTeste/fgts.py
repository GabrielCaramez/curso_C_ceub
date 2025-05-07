def calcular_fgts(salario_bruto: float) -> float:
    """
    Calcula o FGTS com base em 8% do salário bruto.
    """
    if salario_bruto < 0:
        raise ValueError("O salário bruto não pode ser negativo.")
    fgts = salario_bruto * 0.08
    return fgts

# Exemplo de uso
try:
    salario = float(input("Digite o salário bruto: R$ "))
    valor_fgts = calcular_fgts(salario)
    print(f"Valor do FGTS: R$ {valor_fgts:.2f}")
except ValueError as e:
    print(f"Erro: {e}")
