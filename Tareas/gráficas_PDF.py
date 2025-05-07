import matplotlib.pyplot as plt 
import numpy as np 

def load_data(filename):
    data = np.loadtxt(filename)
    return data[:,0], data[:,1]

seeds = [1, 2, 5]

plt.figure()

for i in range(3):
    seed = seeds[i]
    x, y = load_data(f'PDF{seed}.txt')
    plt.plot(x, y, label = f'Semilla {seed}')

plt.xlabel('x')
plt.ylabel('PDF')
plt.title('Función de Densidad de Probabilidad')
plt.grid(True)
plt.legend()
plt.savefig('GráficaPDF.pdf')