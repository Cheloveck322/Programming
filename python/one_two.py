def neuralNetwork(inps, weights):

    prediction = 0

    # В цикле перебора массива весов вычисляем средневзвешенное значение

    # посредством скалярного произведения двух векторов

    for i in range(len(weights)):

        prediction += inps[i]*weights[i]

    return prediction

# Используем нейросеть
# Создадим два предсказания

out_1 = neuralNetwork([150, 40], [0.3, 0.4])

out_2 = neuralNetwork([80, 60], [0.2, 0.4])

# Выводим результат

print(out_1)

print(out_2)

# запускаем Shift+F10 и проверяем
