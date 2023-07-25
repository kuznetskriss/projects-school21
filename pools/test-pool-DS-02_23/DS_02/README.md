# Day 02 – Введение в Pandas

### Преамбула

Exploratory Data Analysis (EDA) - это важная и неотъемлемая часть рабочего процесса в области науки о данных.
Он позволяет нам познакомиться с нашими данными, изучая их с разных сторон с помощью статистики, визуализации данных
и их обобщения. Это помогает обнаружить закономерности в данных, выявить выбросы и получить полное представление
о данных, с которыми мы работаем. Около 70-80% времени работы над реальным проектом занимает работа с данными, и здесь
библиотека Pandas очень полезна.

### Цели

Целью этого проекта является знакомство с библиотекой работы с табличными данными Pandas. С помощью этой библиотеки мы
изучим ответы на опрос участников сообщества [Kaggle](https://www.kaggle.com) о трендах в области анализа данных и машинного обучения.

### Задание

Для начала:

* Отрой файл 02-intro-pandas.ipynb. Познакомься с основами библиотекой Pandas.
* Отрой файл 02-intro-pandas-assigment.ipynb и приступай к выполнению задания

**Задания**:

1. Узнай самый часто встречаемый возраст респондентов
2. Посчитай долю женщин среди русских участником опроса, которые уже не студенты. Результат округли до 2х цифры после запятой
3. Найди среднее время заполнения опроса в **минутах**. Результат округли до 2х знаков после запятой
4. Выведи топ-3 образовательных курса, которые указали респонденты. P.S Это вопрос Q6
5. Узнай топ-5 языков программирования, которые регулярно используют Data Scientists в своей работе
6. Узнай средний доход 'Data Scientist' и 'Machine Learning/ MLops Engineer'
   Т.к в колонке Q29 у на промежуток, то возьмите среднее значение из промежутка. Например '15,000-19,999' - 17500, '125,000-149,999' - 137500. >$1,000,000 - оставляем 1000000

Дополнительные ресурсы для обучения приведены [в файле](materials/reading_list.md)