# -*- coding: utf-8 -*-
"""
Created on Mon Feb 26 19:03:43 2018

@author: Isur
"""
import math
import numpy as np
import matplotlib.pyplot as plt
# Zadanie 1:
file = open("iris.data")
iris_table = []
for line in file:
    row = line.rstrip().split(',')
    iris_table.append(row)
print("Liczba próbek: ", len(iris_table))
print("Liczba atrybutów: ", len(iris_table[0]))

#Zadanie 2:
print("Atrybuty próbki nr 10: ")
for i in iris_table[9]:
    print(i)
print("Atrybuty próbki nr 75: ")
for i in iris_table[74]:
    print(i)
    
euklidesDistance = 0
for i in range(0,4):
    euklidesDistance += (float(iris_table[9][i])-float(iris_table[74][i]))**2
euklidesDistance = math.sqrt(euklidesDistance)
print("Odległosć euklidesowa: ", euklidesDistance)

#Zadanie 3:
attr_one = []
attr_two = []
attr_three = []
attr_four = []

for i in iris_table:
    attr_one.append(float(i[0]))
    attr_two.append(float(i[1]))
    attr_three.append(float(i[2]))
    attr_four.append(float(i[3]))

attr = []
attr.append(attr_one)
attr.append(attr_two)
attr.append(attr_three)
attr.append(attr_four)
for i in range(0,4):
    print("Wartosć minimalna dla atrybutu nr      ", i+1, ": ", np.amin(attr[i],axis=0))
    print("Wartosć maxymalna dla atrybutu nr      ", i+1, ": ", np.amax(attr[i],axis=0))
    print("Wartosć srednia dla atrybutu nr        ", i+1, ": ", np.average(attr[i],axis=0))
    print("Odchylenie standardowe dla atrybutu nr ", i+1, ": ", np.std(attr[i],axis=0))

#Zadanie 4:
plt.scatter(attr[0],attr[1])
plt.show()
#Zadanie 5:
colors = ['RED', 'GREEN']
plt.scatter(attr[0],attr[3], c=colors)
plt.show()
#Zadanie 6:
sum_setosa = [0,0,0,0]
counter_setosa = 0
sum_versicolor = [0,0,0,0]
counter_versicolor = 0
for i in iris_table:
    if i[4] == "Iris-setosa":
        counter_setosa += 1
        for x in range(0,4):
            sum_setosa[x] += float(i[x])
    elif i[4] == "Iris-versicolor":
        counter_versicolor += 1
        for x in range(0,4):
            sum_versicolor[x] += float(i[x])
for i in range(0,4):
    print("AVG setosa attr    : ",i+1," = ", sum_setosa[i]/counter_setosa )
    print("AVG versicolor attr: ",i+1," = ", sum_versicolor[i]/counter_versicolor )
#Zadanie 7:
n_attr_one = []
n_attr_two = []
n_attr_three = []
n_attr_four = []
n_attr = []
n_attr.append(n_attr_one)
n_attr.append(n_attr_two)
n_attr.append(n_attr_three)
n_attr.append(n_attr_four)

for i in range(0,4):
    for x in attr[i]:
        n_attr[i].append((x-np.average(attr[i],axis=0))/np.std(attr[i],axis=0))
for i in range(0,4):
    print("Wartosć minimalna dla atrybutu nr      ", i+1, ": ", np.amin(n_attr[i],axis=0))
    print("Wartosć maxymalna dla atrybutu nr      ", i+1, ": ", np.amax(n_attr[i],axis=0))
    print("Wartosć srednia dla atrybutu nr        ", i+1, ": ", np.average(n_attr[i],axis=0))
    print("Odchylenie standardowe dla atrybutu nr ", i+1, ": ", np.std(n_attr[i],axis=0))
