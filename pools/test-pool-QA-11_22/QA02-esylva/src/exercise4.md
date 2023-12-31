Все сценарии подразумевают в качестве последнего пункта:
- Отправить запрос

# Authorization
1. Регистрация пользователя
Предусловие:
Получен список ролей пользователей (`roleId`).

- Открыть описание эндпоинта `POST ​/api​/authorization​/register` и нажать _Try it out_;
- Заполнить все необходимые поля в теле запроса. Поле `roleId` нужно сменить на id роли клиента 

Положительный сценарий: адреса электронной почты нет в базе - успешная регистрация пользователя (200)

Негативный ответ с валидными данными: адрес электронной почты есть в базе - в регистрации отказано (409)

Негативное тестирование с недопустимыми входными данным: отсутствует доменное имя в адресе электронной 	почты - сообщение о неверном запросе (400)

2. Регистрация через API
- Открыть описание эндпоинта `POST ​/api​/authorization​/login` и нажать на кнопку _Try it out_;
- В теле запроса указать почту и пароль для входа в аккаунт.\

Положительный сценарий: успешный вход в систему (200)

Негативный ответ с валидными данными: пользователь не найден (404) или пользователь не авторизован (401)

Негативное тестирование с недопустимыми входными данным: удалить фигурную скобку в теле запроса - сообщение о неверном запросе (400)


3. Обновить токен
- Открыть описание эндпоинта `POST ​/api​/authorization​/refrish-tocken` и нажать на кнопку _Try it out_;
- В теле запроса указать действующий токен.

Положительный сценарий: успешное обновление (200)

Негативный ответ с валидными данными: страница не найдена (404) или пользователь не авторизован (401)

Негативное тестирование с недопустимыми входными данным: удалить фигурную скобку в теле запроса - сообщение о неверном запросе (400) 

*Отрабатывает с ошибкой (500) при подаче неверного токена


# Banks

1. Создание банка
Предусловие:
Авторизация в качестве администратора.
- Открыть описание эндпоинта `POST ​/api​/banks` и нажать на кнопку _Try it out_;
- Заполнить все необходимые поля в теле запроса.

Положительный сценарий: успешное создание (201)

Негативный ответ с валидными данными: при невыполнении предусловия (401) - пользователь не авторизован или (403) - пользователь авторизован не в качестве администратора

Негативное тестирование с недопустимыми входными данным: удалить фигурную скобку в теле запроса - сообщение о неверном запросе (400)

2. Получение списка банков
- Открыть описание эндпоинта `GET ​/api​/banks` и нажать на кнопку _Try it out_;
- Оставить незаполненные поля

Положительный сценарий: полный список банков (200)

- Открыть описание эндпоинта `GET ​/api​/banks` и нажать на кнопку _Try it out_;
- Заполнить поле `limit` значением `2`
- Заполнить поле `skip` значением `2`

Положительный сценарий: список из двух банков с пропущенными первыми двумя банками из полного списка (200)

3. Обновление информации о банке.
Предусловие:
Авторизация в качестве администратора.
Иметь список ID банков.
- Открыть описание эндпоинта `PATCH ​/api​/banks​/{id}` и нажать на кнопку _Try it out_;
- Заполнить все необходимые поля в теле запроса.

Положительный сценарий: обновление информации (200)

Негативный ответ с валидными данными: при невыполнении предусловия (401) - пользователь не авторизован или (403) - пользователь авторизован не в качестве администратора

Негативное тестирование с недопустимыми входными данным: удалить фигурную скобку в теле запроса - сообщение о неверном запросе (400)

4. Удаление информации о банке.
Предусловие:
Авторизация в качестве администратора.
Иметь список ID банков.
- Открыть описание эндпоинта `DELETE ​/api​/banks​/{id}` и нажать на кнопку _Try it out_;
- Заполнить все необходимые поля в теле запроса.

Положительный сценарий: обновление информации (200)

Негативный ответ с валидными данными: при невыполнении предусловия (401) - пользователь не авторизован или (403) - пользователь авторизован не в качестве администратора

Негативное тестирование с недопустимыми входными данным: удалить фигурную скобку в теле запроса - сообщение о неверном запросе (400)

5. Поиск банка по ID.
Предусловие:
Иметь список ID банков. 
- Открыть описание эндпоинта `GET ​/api​/banks​/{id}` и нажать на кнопку _Try it out_;
- Заполнить все необходимые поля в теле запроса.

Положительный сценарий: получение информации (200)

Негативный ответ с валидными данными: банк не найден (404)

Негативное тестирование с недопустимыми входными данным: сообщение о неверном запросе (400)

6. Поиск банка по названию.
Предусловие:
Иметь список назвавний банков. 
- Открыть описание эндпоинта `GET ​/api​/banks​/Name` и нажать на кнопку _Try it out_;
- Заполнить все необходимые поля в теле запроса (в качестве имени банка использовать полное название, затем первую букву, далее аналогично сценарию 2).

Положительный сценарий: получение информации (200)

Негативный ответ с валидными данными: банк не найден (404)

Негативное тестирование с недопустимыми входными данным: сообщение о неверном запросе (400)

7. Просмотр отзывов о банке.
Предусловие:
Иметь список ID банков. 
- Открыть описание эндпоинта `GET ​/api​/banks​/{id}/feedbacks` и нажать на кнопку _Try it out_;
- Заполнить все необходимые поля в теле запроса (аналогично сценарию 2).

Положительный сценарий: получение информации (200)

Негативный ответ с валидными данными: банк не найден (404)

Негативное тестирование с недопустимыми входными данным: сообщение о неверном запросе (400)

8. Получение списка сотрудников банка
Предусловие:
Авторизация в качестве администратора.
Иметь список ID банков.
- Открыть описание эндпоинта `GET ​/api​/banks​/{id}/employee` и нажать на кнопку _Try it out_;
- Заполнить все необходимые поля в теле запроса (аналогично сценарию 2).

Положительный сценарий: получение информации (200) 

Негативный ответ с валидными данными: банк не найден (404), при невыполнении предусловия (401) - пользователь не авторизован или (403) - пользователь авторизован не в качестве администратора

Негативное тестирование с недопустимыми входными данным: сообщение о неверном запросе (400)

9. Получение списка продуктов банка
Предусловие:
Иметь список ID банков.
- Открыть описание эндпоинта `GET ​/api​/banks​/{id}/products` и нажать на кнопку _Try it out_;
- Заполнить все необходимые поля в теле запроса (аналогично сценарию 2).

Положительный сценарий: получение информации (200) 

Негативный ответ с валидными данными: банк не найден (404)

Негативное тестирование с недопустимыми входными данным: сообщение о неверном запросе (400)
