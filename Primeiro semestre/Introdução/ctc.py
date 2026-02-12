from datetime import datetime
import os
import sys
from time import sleep

if sys.platform != "win32":
    sistema_operacional = 'win'

else:
    sistema_operacional = 'os'

def limpar_console():
    if sistema_operacional == 'win':
        os.system('cls')
    else:
        os.system('clear')

class Canavieiro():
    def __init__(
            self, 
            frota : str, 
            hora_entrada : datetime,  
            pesoBruto : float, 
            hora_saida : datetime|None = None,
            pesoTara : float = 0.0, 
            pesoLiquido : float = 0.0
            ):
        self.frota = frota
        self.hora_entrada = hora_entrada
        self.hora_saida = hora_saida
        self.pesoBruto = pesoBruto
        self._pesoTara = pesoTara
        self.pesoLiquido = pesoLiquido

    @property
    def pesoTara(self):
        return self._pesoTara
    
    @pesoTara.setter
    def pesoTara(self, pesoTara : float):
        self._pesoTara = pesoTara
        self.calcular_peso_liquido()


    def calcular_peso_liquido(self):
        self.pesoLiquido = self.pesoBruto - self.pesoTara

    
def entrada_canavieiro(frota : str, pesoBruto : float):
    canavieiro = Canavieiro(frota, datetime.now(), pesoBruto)
    return canavieiro

def saida_canavieiro(canavieiro : Canavieiro, pesoTara : float):
    canavieiro.hora_saida = datetime.now()
    canavieiro.pesoTara = pesoTara
    return canavieiro

def buscar_canavieiro(frota : str, canavieiros : list[Canavieiro]):
    for canavieiro in canavieiros:
        if canavieiro.frota == frota:
            return canavieiro
    return None

print("Olá, sejá muito bem vindo ao sistem de pesagem do Lucas.")
sleep(5)
limpar_console()

