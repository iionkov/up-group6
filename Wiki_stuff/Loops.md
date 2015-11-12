#Примерна програма, реализирана чрез трите оператора за цикъл
#####Задача:
Да се напише програма, която въвежда n-цифрено число и извежда сумата на съставящи го четни цифри.

| Чрез _for_:                     | Чрез _while_:                     | Чрез _do_ _while_:                 |
|------------------------------------|-----------------------------------|------------------------------------|
|int number;                     | int number;                       | int number;                        |
| cin >> number;                     | cin >> number;                    | cin >> number;                     |
| int Sum = 0;                       | int Sum = 0;                      | int Sum = 0;                       |
| for( ; number != 0; number /= 10 ) | while( number != 0 )              | do                                 |
| {                                  | {                                 | {                                  |
| int digit = number % 10;           | int digit = number % 10;          | int digit = number % 10;           |
| if( digit % 2 == 0 ) Sum += digit; | if( digit % 2 == 0) Sum += digit; | if( digit % 2 == 0 ) Sum += digit; |
| }                                  | number /= 10;                     | number /= 10;                      |
|                                    | }                                 |}                                   |
|                                    |                                   |while( number != 0 );               |
