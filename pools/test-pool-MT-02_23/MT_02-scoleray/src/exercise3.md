# Список Тест-кейсов

## Тест-кейс №1 — Проверка успешного прохождения авторизации

1. Предшествующие условия:
    - пользователь зашел на сайт https://www.saucedemo.com/
    - открыта форма авторизации
2. Шаги:
    - заполнить поле "Username" ввести "standard_user"
    - заполнить поле "Password" ввести "secret_sauce"
    - нажать на кнопку "LOGIN"
3. Ожидаемый результат:
    - ввойти в аккаунт

## Тест-кейс №2 — Проверка сортировки по алфавиту

1. Предшествующие условия:
   - пользователь авторизован
   - пользователь открыл каталог
2. Шаги:
   - навести курсор на значок фильтра
   - выбрать "NAME (A TO Z)"
3. Ожидаемый результат:
   - каталог отсортировался по алфавиту

## Тест-кейс №3 — Проверка сортировки с последней буквы алфавита по возрастанию

1. Предшествующие условия:
   - пользователь авторизован
   - пользователь открыл катало
2. Шаги:
   - навести курсор на значок фильтра
   - выбрать "NAME (Z TO A)"
3. Ожидаемый результат:
   - каталог отсортировался с последней буквы алфавита по возрастанию
   
## Тест-кейс №4 — Проверка сортировки по возрастанию цены

1. Предшествующие условия:
   - пользователь авторизован
   - пользователь открыл катало
2. Шаги:
   - навести курсор на значок фильтра
   - выбрать "PRICE (LOW TO HIGH)"
3. Ожидаемый результат:
   - каталог отсортировался по возрастанию цены
   
## Тест-кейс №5 — Проверка сортировки по убыванию цены

1. Предшествующие условия:
   - пользователь авторизован
   - пользователь открыл катало
2. Шаги:
   - навести курсор на значок фильтра
   - выбрать "PRICE (HIGH TO LOW)"
3. Ожидаемый результат:
   - каталог отсортировался по убыванию цены

## Тест-кейс №6 — Проверка успешного добавления товара в корзину

1. Предшествующие условия:
   - пользователь авторизован
   - пользователь открыл катало
2. Шаги:
   - нажать на кнопку "ADD TO CART" выбранного товара
3. Ожидаемый результат:
   - после нажатия появляется/увеличивается количество выбранных предметов в правом вверхнем углу

## Тест-кейс №7 — Проверка успешного удаление товара из корзины 

1. Предшествующие условия:
   - пользователь авторизован
   - пользователь открыл корзину
2. Шаги:
   - нажать на кнопку "REMOVE" выбранного товара
3. Ожидаемый результат:
   - товар удалится из корзины
   
## Тест-кейс №8 — Проверка успешного перехода в твиттер

1. Предшествующие условия:
   - пользователь авторизован
2. Шаги:
   - перейти на подвал страницы
   - нажать на иконку "twitter"
3. Ожидаемый результат:
   - открывается страница данного сайта в твиттере

## Тест-кейс №9 — Проверка успешного перехода в фэйсбук

1. Предшествующие условия:
   - пользователь авторизован
2. Шаги:
   - перейти на подвал страницы
   - нажать на иконку "f"
3. Ожидаемый результат:
   - открывается страница данного сайта в фэйсбук

## Тест-кейс №10 — Проверка успешного перехода в LinkedIn

1. Предшествующие условия:
   - пользователь авторизован
2. Шаги:
   - перейти на подвал страницы
   - нажать на иконку "in"
3. Ожидаемый результат:
   - открывается страница данного сайта в LinkedIn

## Тест-кейс №11 — Проверка заказа

1. Предшествующие условия:
   - пользователь авторизован
   - пользователь зашел в корзину
2. Шаги:
   - нажать "CHECKOUT"
   - заполнить полzя "Имя, Фамилия"
   - заполнить поле "Почтовый индекс"
   - нажать "CONTINUE"
   - проверить данные на корректность и нажать  "FINISH"
3. Ожидаемый результат:
   - увидеть благодарность за наш заказ
   - прочитать фарзу "Your order has been dispatched,
and will arrive just as fast as the pony can get there!"

## Тест-кейс №12 — Проверка успешности увеличения/уменьшения количества выбранных предметов в корзине заказа

1. Предшествующие условия:
   - пользователь авторизован
   - пользователь зашел в корзину
2. Шаги:
   - в поле "QTY" изменить количество предметов
3. Ожидаемый результат:
   - сумма заказа изменяется
   