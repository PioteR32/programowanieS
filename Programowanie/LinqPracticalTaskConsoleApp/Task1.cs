using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/*========================================
== POZIOM 1 – PODSTAWOWY ==
========================================

1. Znajdź wszystkie osoby z Krakowa.
2. Znajdź osoby pełnoletnie.
3. Posortuj osoby po wieku rosnąco.
4. Posortuj osoby po nazwisku malejąco.
5. Wypisz tylko imię i nazwisko każdej osoby.
6. Wypisz tylko miasta bez duplikatów.
7. Oblicz liczbę osób z Warszawy.
8. Oblicz średnią pensję wszystkich osób.
9. Znajdź najmłodszą osobę.
10. Sprawdź, czy jest ktoś z Gdańska.


========================================
== POZIOM 2 – ŚREDNI ==
========================================

11. Posortuj osoby po mieście, a w ramach miasta po pensji malejąco.
12. Znajdź osoby w wieku od 25 do 35 lat (włącznie).
13. Oblicz sumę pensji osób z Kielc.
14. Znajdź pierwszą osobę, której pensja jest większa niż 10 000.
15. Znajdź ostatnią osobę w kolejności alfabetycznej po nazwisku.
16. Wygeneruj dane osób w formacie: "Imię Nazwisko (Miasto)".
17. Sprawdź, czy wszyscy mają co najmniej 18 lat.
18. Policz, ile jest kobiet.
19. Znajdź osoby, które zarabiają więcej niż średnia pensja.
20. Znajdź najstarszą osobę z Krakowa.


========================================
== POZIOM 3 – ZAAWANSOWANY ==
========================================

21. Wypisz unikalne umiejętności wszystkich osób posortowane alfabetycznie.
22. Znajdź osoby, które mają skill "C#".
23. Znajdź osoby, które mają co najmniej trzy skille.
24. Znajdź osoby z Warszawy, posortuj je po wieku malejąco i wypisz tylko ich imię, nazwisko, wiek i pensję.
25. Sprawdź, czy ktoś ma skill "Azure".
26. Sprawdź, czy wszyscy zarabiają co najmniej 4000.
27. Znajdź osobę o największej pensji.
28. Znajdź osobę o najmniejszej pensji.
29. Wypisz osoby, które mają taki sam wiek jak najstarsza osoba.
30. Wypisz miasta wraz z liczbą osób pochodzących z każdego miasta.


========================================
== POZIOM 4 – EKSTRA / DLA CHĘTNYCH ==
========================================

31. Znajdź osoby, które mają identyczny zestaw skilli.
32. Posortuj osoby według liczby posiadanych skilli.
33. Podziel osoby na dwie listy: zarabiających przynajmniej 8000 oraz zarabiających mniej niż 8000.
34. Znajdź osoby, które mieszkają w najczęściej występującym mieście.
35. Przyporządkuj każdą osobę do przedziału wiekowego (np. 20–29, 30–39, 40–49) i wypisz osoby z każdego przedziału.

*/
namespace LinqPracticalTaskConsoleApp
{
	internal class Task1
	{
		static void Print<T>(string title, IEnumerable<T> data)
		{
			Console.WriteLine($"\n=== {title} ===");
			foreach (var item in data)
				Console.WriteLine(item);
		}

		public static void DoTasks()
		{
			var people = new List<Person>
		{
			new Person() { Id=1, FirstName="Anna",  LastName="Nowak",    Age=29, Gender=Gender.Female, City="Kielce", Salary=8200m,  Skills=["C#", "LINQ", "SQL"] },
			new() { Id=2, FirstName="Marek", LastName="Kowalski", Age=43, Gender=Gender.Male,   City="Warszawa", Salary=15000m, Skills=["Azure", "C#", "DevOps"] },
			new() { Id=3, FirstName="Ewa",   LastName="Wiśniewska",Age=35, Gender=Gender.Female, City="Kraków", Salary=9800m,  Skills=["JavaScript", "React"] },
			new() { Id=4, FirstName="Jan",   LastName="Zieliński", Age=43, Gender=Gender.Male,   City="Gdańsk", Salary=12000m, Skills=["C#", "SQL"] },
			new() { Id=5, FirstName="Ola",   LastName="Maj",       Age=26, Gender=Gender.Female, City="Kielce", Salary=7200m,  Skills=["Python", "ML"] },
			new() { Id=6, FirstName="Piotr", LastName="Lewandowski",Age=37,Gender=Gender.Male,   City="Warszawa", Salary=13400m, Skills=["C#", "LINQ", "Azure"] },
			new() { Id=7, FirstName="Iga",   LastName="Kowal",     Age=31, Gender=Gender.Female, City="Kraków", Salary=9900m,  Skills=["Go", "Kubernetes"] },
			new() { Id=8, FirstName="Tomek", LastName="Sikora",    Age=29, Gender=Gender.Male,   City="Kielce", Salary=8800m,  Skills=["C#", "MAUI", "Bluetooth"] },
		};

			// === POZIOM 1 ===

			// Zadanie 1
			var q1 = people.Where(p => p.City == "Kraków");
			Print("Zadanie 1", q1);
			//2.Znajdź osoby pełnoletnie.
			var q2 = people.Where(p => p.Age >= 18);
			Print("Zadanie 2", q2);
			//3.Posortuj osoby po wieku rosnąco.
			var q3 = people.OrderBy(p => p.Age);
			Print("Zadanie 3", q3);
			//4.Posortuj osoby po nazwisku malejąco.
			var q4 = people.OrderByDescending(p => p.LastName);
			Print("Zadanie 4", q4);
			//5.Wypisz tylko imię i nazwisko każdej osoby.
			var q5 = people.Select(p => p.FirstName + " " + p.LastName);
			Print("Zadanie 5", q5);
			//6.Wypisz tylko miasta bez duplikatów.
			var q6 = people.Select(p => p.City).Distinct();
			Print("Zadanie 6", q6);
			//7.Oblicz liczbę osób z Warszawy.
			var q7 = people.Where(p => p.City == "Warszawa").Count();
			Console.WriteLine($"Zadanie 7 {q7}");
			//8.Oblicz średnią pensję wszystkich osób.
			var q8 = people.Sum(p => p.Salary) / people.Count();
			Console.WriteLine($"Zadanie 8 {q8}");
			//9. Znajdź najmłodszą osobę.
			var q9 = people.OrderBy(p => p.Age).First();
			Console.WriteLine($"Zadanie 9 {q9}");
			//10.Sprawdź, czy jest ktoś z Gdańska.
			var q10 = people.Where(p => p.City == "Gdańsk").Count() == 0;
			Console.WriteLine($"Zadanie 10 {q10}");
			//11. Posortuj osoby po mieście, a w ramach miasta po pensji malejąco.
			var q11 = people.OrderBy(p => p.City).ThenByDescending(p => p.Salary);
			Print("Zadanie 11", q11);
			//12. Znajdź osoby w wieku od 25 do 35 lat (włącznie).
			var q12 = people.Where(p => p.Age >= 25 && p.Age <= 35);
			Print("Zadanie 12", q12);
			//13. Oblicz sumę pensji osób z Kielc.
			var q13 = people.Where(p => p.City == "Kielce").Sum(p => p.Salary);
			Console.WriteLine($"Zadanie 13 {q13}");
			//14. Znajdź pierwszą osobę, której pensja jest większa niż 10 000.
			var q14 = people.Where(p => p.Salary > 10000).OrderBy(p => p.Salary).First();
			Console.WriteLine($"Zadanie 14 {q14}");
			//15. Znajdź ostatnią osobę w kolejności alfabetycznej po nazwisku.
			var q15 = people.OrderBy(p => p.LastName).Last();
			Console.WriteLine($"Zadanie 15 {q15}");
			//16. Wygeneruj dane osób w formacie: "Imię Nazwisko (Miasto)".
			var q16 = people.Select(p => $"{p.FirstName} {p.LastName} ({p.City})");
			Print("Zadanie 16", q16);
			//17. Sprawdź, czy wszyscy mają co najmniej 18 lat.
			var q17 = people.All(p => p.Age >= 18);
			Console.WriteLine($"Zadanie 17 {q17}");
			//18. Policz, ile jest kobiet.
			var q18 = people.Where(p => p.Gender == Gender.Female).Count();
			Console.WriteLine($"Zadanie 18 {q18}");
			//19. Znajdź osoby, które zarabiają więcej niż średnia pensja.
			var q19 = people.Where(p => p.Salary > people.Sum(p => p.Salary) / people.Count());
			Print("Zadanie 19", q19);
			//20. Znajdź najstarszą osobę z Krakowa.
			var q20 = people.Where(p => p.City == "Kraków").OrderByDescending(p => p.Age).First();
			Console.WriteLine("Zadanie 20", q20);
			//21. Wypisz unikalne umiejętności wszystkich osób posortowane alfabetycznie.
			var q21 = people.SelectMany(p => p.Skills).Distinct().OrderBy(s => s);
			Print("Zadanie 21", q21);
			//21b. Wypisz tylko unikalne umiejętności wszystkich osób posortowane alfabetycznie.
			var q21v2 = people.SelectMany(p => p.Skills).GroupBy(s => s).Where(g => g.Count() == 1).Select(g => g.Key).OrderBy(s => s);
			Print("Zadanie 21", q21v2);
			//22. Znajdź osoby, które mają skill "C#".
			var q22 = people.Where(p => p.Skills.Contains("C#"));
			Print("Zadanie 22", q22);
			//23. Znajdź osoby, które mają co najmniej trzy skille.
			var q23 = people.Where(p => p.Skills.Count() >= 3);
			Print("Zadanie 23", q23);
			//24. Znajdź osoby z Warszawy, posortuj je
			//po wieku malejąco i wypisz tylko ich imię, nazwisko, wiek i pensję.
			var q24 = people.Where(p => p.City == "Warszawa").OrderByDescending(p => p.Age).Select(p => $"{p.FirstName} {p.LastName}, {p.Age} lat, {p.Salary} zł");
			Print("Zadanie 24", q24);
			//25. Sprawdź, czy ktoś ma skill "Azure".
			var q25 = people.Where(p => p.Skills.Contains("Azure")).Count() > 0;
			Console.WriteLine($"Zadanie 25 {q25.ToString()}");
			//26. Sprawdź, czy wszyscy zarabiają co najmniej 4000.
			var q26 = people.All(p => p.Salary >= 4000);
			Console.WriteLine($"Zadanie 26 {q26.ToString()}");
			//27. Znajdź osobę o największej pensji.
			var q27 = people.OrderByDescending(p => p.Salary).First();
			Console.WriteLine($"Zadanie 27 {q27.ToString()}");
			//28. Znajdź osobę o najmniejszej pensji.
			var q28 = people.OrderBy(p => p.Salary).First();
			Console.WriteLine($"Zadanie 28 {q28}");
			//29. Wypisz osoby, które mają taki sam wiek jak najstarsza osoba.
			var q29 = people.Where(p => p.Age == people.OrderBy(p => p.Age).First().Age);
			Print("Zadanie 29", q29);
			//30. Wypisz miasta wraz z liczbą osób pochodzących z każdego miasta.
			var q30 = people.Select(p => $"{p.City} {people.Where(pp => pp.City == p.City)}");
			Print("Zadanie 30", q30);
			//31. Znajdź osoby, które mają identyczny zestaw skilli.
			var q31 = people
				.Select(p => people.Where(pp => pp.Skills == p.Skills).Distinct())
				.Where(p => p.Count() > 1);

			//32. Posortuj osoby według liczby posiadanych skilli.
			var q32 = people.OrderBy(p => p.Skills.Count());
			Print("Zadanie 32", q32);
			//33. Podziel osoby na dwie listy: zarabiających przynajmniej 8000 oraz zarabiających mniej niż 8000.
			var q33 = new List<IEnumerable<Person>>(new List<IEnumerable<Person>>
			{
				people.Where(p => p.Salary >= 8000),
				people.Where(p => p.Salary < 8000)
			});
			//34. Znajdź osoby, które mieszkają w najczęściej występującym mieście.

			var q34 = people.GroupBy(p => p.City).OrderByDescending(g => g.Count()).First();
			//35. Przyporządkuj każdą osobę do przedziału wiekowego (np. 20–29, 30–39, 40–49) i wypisz osoby z każdego przedziału.
			var q35 = people.GroupBy(p => p.Age / 10 * 10).OrderBy(g => g.Key);
			Print("Zadanie 35", q35.Select(g => $"Wiek {g.Key}-{g.Key + 9}:\n" + string.Join("\n", g.Select(p => $"{p.FirstName} {p.LastName}, {p.Age} lat"))));
			/*

*/
		}
	}
}

