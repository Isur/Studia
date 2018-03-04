file = open("iris.data")
data = []
for line in file:
    row = line.rstrip().split(',')
    data.append(row)
print("Liczba próbek: ", len(data))
print("Liczba atrybutów: ", len(data[0]))