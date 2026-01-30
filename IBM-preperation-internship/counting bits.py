n = int(input())

binary = bin(n)[2:]

positions = []
for i, bit in enumerate(binary):
    if bit == '1':
        positions.append(i + 1)

print(len(positions))
for pos in positions:
    print(pos)  
