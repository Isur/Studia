from zad_01 import data as iris
import numpy as np

def analyze(attr):
    print("Wartość minimalna: ", np.amin(attr,axis=0))
    print("Wartość maksymalna: ", np.amax(attr,axis=0))
    print("Wartość średnia: ", np.mean(attr,axis=0))
    print("Odchylenie standardowe: ", np.std(attr,axis=0))

attr_one = []
attr_two = []
attr_three = []
attr_four = []
for i in iris:
    attr_one.append(float(i[0]))
    attr_two.append(float(i[1]))
    attr_three.append(float(i[2]))
    attr_four.append(float(i[3]))

print("Analiza pierwszego atrybutu: ")
analyze(attr_one)
print("Analiza drugiego atrybutu: ")
analyze(attr_two)
print("Analiza trzeciego atrybutu: ")
analyze(attr_three)
print("Analiza czwartego atrybutu: ")
analyze(attr_four)
