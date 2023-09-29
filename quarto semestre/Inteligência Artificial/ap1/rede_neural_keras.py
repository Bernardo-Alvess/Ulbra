import pandas as pd
from keras.models import Sequential
from keras.layers import Dense
import matplotlib.pyplot as plt

dataset = pd.read_csv('dataset/admission_dataset.csv')

y = dataset['Chance of Admit'] #variavel target
x = dataset.drop('Chance of Admit', axis = 1) #resto do dataset sem a variavel target

#Treinando das linhas 0 a 300 e testando da linha 300 a 400
x_treino, x_teste = x[0:300], x[300:]
y_treino, y_teste = y[0:300],  y[300:]

#Criando a arquitetura da rede neural
modelo = Sequential()
modelo.add(Dense(units=3, activation='relu', input_dim=7))
modelo.add(Dense(units=1, activation='linear'))

#treinando a rede neural
modelo.compile(loss='mse', optimizer='adam', metrics=['mae'])
resultado = modelo.fit(x_treino, y_treino, epochs=200, batch_size=32, validation_data=(x_teste, y_teste))

#plotar grafico do histórico de treinamento
plt.plot(resultado.history['loss'])
plt.plot(resultado.history['val_loss'])
plt.title('Histórico de Treinamento')
plt.ylabel('Função de custo')
plt.xlabel('Épocas de treinamento')
plt.legend(['Erro treino', 'Erro teste'])
plt.show()