# Создаем функцию
def neuralNetwork(inp, weight):
# рассчитываем прогноз
     prediction = inp * weight
     return prediction

# Используем нейросеть

# Создадим два предсказания

out_1 = neuralNetwork(150, 0.3)
out_2 = neuralNetwork(130, 0.4)

# Выводим результат
print(out_1)
print(out_2)
# запускаем Shift+F10 и проверяем