from zad_01 import data as iris

def printAttr(sample,y):
    print("Atrybuty próbki nr ", y, " : ")
    for i in sample[y-1]:
        print(i)

printAttr(iris, 10)
printAttr(iris, 75)