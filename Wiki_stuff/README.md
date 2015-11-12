#####Да се напише програма, която намира сечението на две числови редици - типът е без значение, няма условие за тяхната наредба. Елементите на сечението да се запишат в нов масив.
```C++
//Задачата изисква от нас по подадени два масива от числа, да върнем трети, който да съдържа елементите от сечението //им т.е. всички елементи, които се срещат както в единия, така и в другия масив.
//За целта ни трябват три масива:
int firstArray[10];
int secondArray[15];
int arrayOfCommonElements[10]; // размерът е 10, тъй като може по-малкият по размер масив да се съдържа изцяло
int countOfElementsForTheFirstArray;
cin >> countOfElementsForTheFirstArray;
int countOfElementsForTheSecondArray;
cin >> countOfElementsForTheSecondArray;
int countOfElementsInCommonArray = 0;
for(int i=0;i < countOfElementsForTheFirstArray; i++)
{
cin >> firstArray[i];
}
for(int j=0;j < countOfElementsForTheSecondArray; j++)
{
cin >> secondArray[j];
}
//Вече сме попълнили известна част от масивите - ред е на сечението
for(int k = 0; k < countOfElementsForTheFirstArray; k++)
{
int searchElem = firstArray[k];
for(int p = 0;p < countOfElementsForTheSecondArray;p++)
{
if( secondArray[p] == searchElem) 
{
if(countOfElementsInCommonArray == 0) arrayOfCommonElements[countOfElementsInCommonArray++] = searchelem;
else if(!isInArray(elem,arrayOfCommonElements,countOfElementsInCommonArray)) 
{
arrayOfCommonElements[countOfElementsInCommonArray++] = searchelem;
}
}
}
}
for(int q = 0; q < countOfElementsInCommonArray;q++)
{
cout<<arrayOfCommonElements[q]<<endl;
}
//Функцията isInArray проверява дали елемента вече се съдържа в масива - по-късно ще разглеждаме масиви като 
//параметри на фунции, конкретно в примера е използвана за яснота на кода.
```
