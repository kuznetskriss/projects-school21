# HTTP-сообщения

**HTTP сообщения** - это обмен данными между сервером и клиентом. Есть два типа сообщений: запросы, отправляемые клиентом, чтобы инициировать реакцию со стороны сервера, и ответы от сервера.
Веб разработчики не создают текстовые сообщения HTTP самостоятельно - это делает программа, браузер, прокси или веб-сервер. Они обеспечивают создание HTTP сообщений через конфигурационные файлы (для прокси и серверов), APIs (для браузеров) или другие интерфейсы.

![httpmsg1](misc/images/httpmsg1.png)

**Запросы (HTTP Requests)** — сообщения, которые отправляются клиентом на сервер, чтобы вызвать выполнение некоторых действий. Зачастую для получения доступа к определенному ресурсу. Основой запроса является HTTP-заголовок.
**Ответы (HTTP Responses)** — сообщения, которые сервер отправляет в ответ на клиентский запрос.

### HTTP запросы и ответы имеют близкую структуру. Они состоят из:

1.Стартовая строка (_start line_) — используется для описания версии используемого протокола и другой информации — вроде запрашиваемого ресурса или кода ответа. Как можно понять из названия, ее содержимое занимает ровно одну строчку.
2.HTTP-заголовки (_HTTP Headers_) — несколько строчек текста в определенном формате, которые либо уточняют запрос, либо описывают содержимое тела сообщения.
3.Пустая строка, которая сообщает, что все метаданные для конкретного запроса или ответа были отправлены.
4.Опциональное тело сообщения, которое содержит данные, связанные с запросом, либо документ (например _HTML-страницу_), передаваемый в  ответе.

![httpmsg1](misc/images/httpmsg2.png)


# Запросы

## Стартовая строка

HTTP запросы - это сообщения, отправляемые клиентом, чтобы инициировать реакцию со стороны сервера. Их стартовая строка состоит из трёх элементов:

1.Метод HTTP, глагол (например, GET, PUT или POST) или существительное (например, HEAD или OPTIONS), описывающие требуемое действие. Например, GET указывает, что нужно доставить некоторый ресурс, а POST означает отправку данных на сервер (для создания или модификации ресурса, или генерации возвращаемого документа).
2.Цель запроса, обычно URL, или абсолютный путь протокола, порт и домен обычно характеризуются контекстом запроса. Формат цели запроса зависит от используемого HTTP-метода. Это может быть
- Абсолютный путь, за которым следует '?' и строка запроса. Это самая распространённая форма, называемая исходной формой (origin form) . Используется с методами GET, POST, HEAD, и OPTIONS. POST / HTTP 1.1 GET /background.png HTTP/1.0 HEAD /test.html?query=alibaba HTTP/1.1 OPTIONS /anypage.html HTTP/1.0
- Полный URL - абсолютная форма (absolute form) , обычно используется с GET при подключении к прокси. GET http://developer.mozilla.org/ru/docs/Web/HTTP/Messages HTTP/1.1
- Компонента URL "authority", состоящая из имени домена и (необязательно) порта (предваряемого символом ':'), называется authority form. Используется только с методом CONNECT при установке туннеля HTTP. CONNECT developer.mozilla.org:80 HTTP/1.1
- Форма звёздочки (asterisk form), просто "звёздочка" ('*') используется с методом OPTIONS и представляет сервер. OPTIONS * HTTP/1.1

3.Версия HTTP, определяющая структуру оставшегося сообщения, указывая, какую версию предполагается использовать для ответа.

## Заголовки

**Заголовки запроса HTTP** имеют стандартную для заголовка HTTP структуру: не зависящая от регистра строка, завершаемая (':') и значение, структура которого определяется заголовком. Весь заголовок, включая значение, представляет собой одну строку, которая может быть довольно длинной.

Существует множество заголовков запроса. Их можно разделить на несколько групп:

- Основные заголовки (General headers), например, Via (en-US), относящиеся к сообщению в целом
- Заголовки запроса (Request headers), например, User-Agent, Accept-Type, уточняющие запрос (как, например, Accept-Language), придающие контекст (как Referer), или накладывающие ограничения на условия (like If-None).
- Заголовки сущности, например Content-Length, относящиеся к телу сообщения. Как легко понять, они отсутствуют, если у запроса нет тела.

 ![headers1](misc/images/headers1.png)


## Тело

Последней частью запроса является его тело. Оно бывает не у всех запросов: запросы, собирающие (fetching) ресурсы, такие как GET, HEAD, DELETE, или OPTIONS, в нем обычно не нуждаются. Но некоторые запросы отправляют на сервер данные для обновления, как это часто бывает с запросами POST (содержащими данные HTML-форм).

Тела можно грубо разделить на две категории:

- Одноресурсные тела (_Single-resource bodies_), состоящие из одного отдельного файла, определяемого двумя заголовками: Content-Type и Content-Length.
- Многоресурсные тела (_Multiple-resource bodies_), состоящие из множества частей, каждая из которых содержит свой бит информации. Они обычно связаны с HTML-формами.


# Ответы 

## Строка статуса (_Status line_)
Стартовая строка ответа HTTP, называемая строкой статуса, содержит следующую информацию:

1.Версию протокола, обычно HTTP/1.1.
2.Код состояния (status code), показывающая, был ли запрос успешным. Примеры: 200, 404 или 302
3.Пояснение (status text). Краткое текстовое описание кода состояния, помогающее пользователю понять сообщение HTTP..

Пример строки статуса: **HTTP/1.1 404 Not Found.**


## Заголовки

**Заголовки ответов HTTP** имеют ту же структуру, что и все остальные заголовки: не зависящая от регистра строка, завершаемая двоеточием (':') и значение, структура которого определяется типом заголовка. Весь заголовок, включая значение, представляет собой одну строку.

Существует множество заголовков ответов. Их можно разделить на несколько групп:

- Основные заголовки (General headers), например, Via (en-US), относящиеся к сообщению в целом.
- Заголовки ответа (Response headers), например, Vary и Accept-Ranges, сообщающие дополнительную информацию о сервере, которая не уместилась в строку состояния.
- Заголовки сущности (Entity headers), например, Content-Length, относящиеся к телу ответа. Отсутствуют, если у запроса нет тела.

 ![headers2](misc/images/headers2.png)

## Тело

Последней частью ответа является его тело. Оно есть не у всех ответов: у ответов с кодом состояния, например, 201 или 204, оно обычно отсутствует.

Тела можно разделить на три категории:

- Одноресурсные тела (_Single-resource bodies_), состоящие из отдельного файла известной длины, определяемые двумя заголовками: Content-Type и Content-Length.
- Одноресурсные тела (_Single-resource bodies_), состоящие из отдельного файла неизвестной длины, разбитого на небольшие части (chunks) с заголовком Transfer-Encoding (en-US), значением которого является chunked.
- Многоресурсные тела (_Multiple-resource bodies_), состоящие из многокомпонентного тела, каждая часть которого содержит свой сегмент информации. Они относительно редки


### Фреймы HTTP/2
Сообщения HTTP/1.x имеют несколько недостатков в отношении производительности:

- Заголовки, в отличие от тел, не сжимаются.
- Заголовки, которые зачастую практически совпадают у идущих подряд сообщений, приходится передавать по отдельности.
- Мультиплексность невозможна. Приходится открывать соединение для каждого сообщения, а тёплые (warm) соединения TCP эффективнее холодных (cold).
- HTTP/2 переходит на новый уровень: он делит сообщения HTTP/1.x на фреймы, которые внедряются в поток. Фреймы данных из заголовков отделены друг от друга, что позволяет сжимать заголовки. Несколько потоков можно объединять друг с другом - такой процесс называется мультиплексированием - что позволяет более эффективно использовать TCP-соединения.


# Заключение

Сообщения HTTP играют ключевую роль в использовании HTTP; они имеют простую структуру и хорошо расширяемы. Механизм фреймов в HTTP/2 добавляет ещё один промежуточный уровень между синтаксисом HTTP/1.x и используемым им транспортным протоколом, не проводя фундаментальных изменений: создаётся надстройка над уже зарекомендовавшими себя методами.



