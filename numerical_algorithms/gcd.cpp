# include<iostream>
using namespace std;

/* Данная функция находит НОД двух чисел, используя алгоритм Евклида, суть которого заключается в следующем: Мы имеем
два числа, НОД которых необходимо найти. Создадим переменную (int rm), которая будет хранить остаток от деления одного
числа на другое. Заведем цикл, условием выхода из которого будет равенство нулю одной из переменных (в данном случае b).
На каждой итерации цикла мы запоминаем остаток от деления числа a на число b в rm, переменной a присываиваем значение b,
а переменной b - значение rm. Как только число b стало равно 0, число a - искомый наибольший общий делитель. */  

int gcd(int a, int b)
{
  int rm;
  while (b != 0)
  {
    rm = a % b;
    a = b;
    b = rm;
  }

  return a;
}

int main()
{
  int a, b;
  cout<<"Enter two numbers"<<endl;
  cin>>a>>b;
  cout<<gcd(a, b);

  return 0;
}
