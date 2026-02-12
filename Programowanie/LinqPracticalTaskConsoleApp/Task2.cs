using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.WebSockets;
using System.Text;
using System.Threading.Tasks;

namespace LinqPracticalTaskConsoleApp;

/*
========================================
== ZESTAW ZADA� � LINQ � KLASA ORDER ==
==      (zadania ca�kowicie nowe)     ==
========================================

POZIOM 1 � PODSTAWOWY
1. Wypisz wszystkie zam�wienia o statusie �New�.
2. Sprawd�, czy istnieje zam�wienie na produkt �Laptop�.
3. Wypisz zam�wienia z ostatnich 30 dni.

POZIOM 2 � �REDNI
4. Wygeneruj list� tekst�w w formacie: "Klient ? warto�� zam�wienia".
5. Znajd� zam�wienia, w kt�rych nazwa produktu zawiera liter� �o�.
6. Znajd� zam�wienia maj�ce warto�� wi�ksz� ni� 1000 i status inny ni� �Cancelled�.
7. Sprawd�, czy wszystkie zam�wienia pochodz� z bie��cego roku.

POZIOM 3 � ZAAWANSOWANY
8. Znajd� zam�wienia, gdzie klient zam�wi� wi�cej ni� jeden r�ny produkt (czyli klient pojawia si� wi�cej ni� raz z r�nymi produktami).
9. Wypisz klient�w wraz z liczb� dni, kt�re min�y od ich najstarszego zam�wienia.
10. Wypisz wszystkie unikalne pary (Klient, Produkt).
11. Znajd� klient�w, kt�rzy maj� co najmniej jedno zam�wienie w statusie �Cancelled� ORAZ co najmniej jedno w statusie �Delivered�.
12. Wypisz zam�wienia, kt�rych warto�� mie�ci si� pomi�dzy 1000 a 3000 z� i zosta�y z�o�one w ci�gu ostatnich 14 dni.
13. Znajd� klient�w, kt�rzy zamawiali ten sam produkt w r�nych terminach.
14. Znajd� zam�wienia, w kt�rych cena jednostkowa produktu jest wy�sza ni� ��czna warto�� jakiegokolwiek innego zam�wienia.
*/

internal class Task2
{
    static void Print<T>(string title, IEnumerable<T> data)
    {
        Console.WriteLine($"\n=== {title} ===");
        foreach (var item in data)
            Console.WriteLine(item);
    }

    public static void DoTask()
    {
        var orders = new List<Order>
        {
            // Anna
            new() { Id = 1,  Customer="Anna", Product="Laptop",    Quantity=1, PricePerItem=4500m, OrderDate=DateTime.Today.AddDays(-20), Status=OrderStatus.New },
            new() { Id = 2,  Customer="Anna", Product="Myszka",    Quantity=2, PricePerItem=75m,   OrderDate=DateTime.Today.AddDays(-5),  Status=OrderStatus.Delivered },
            new() { Id = 3,  Customer="Anna", Product="Laptop",    Quantity=1, PricePerItem=4600m, OrderDate=DateTime.Today.AddDays(-2),  Status=OrderStatus.Shipped },

            // Piotr
            new() { Id = 4,  Customer="Piotr", Product="Monitor",   Quantity=1, PricePerItem=900m,  OrderDate=DateTime.Today.AddDays(-35), Status=OrderStatus.Delivered },
            new() { Id = 5,  Customer="Piotr", Product="Klawiatura",Quantity=1, PricePerItem=120m,  OrderDate=DateTime.Today.AddDays(-10), Status=OrderStatus.Cancelled },

            // Ewa
            new() { Id = 6,  Customer="Ewa", Product="Tablet",      Quantity=1, PricePerItem=1500m, OrderDate=DateTime.Today.AddDays(-8),  Status=OrderStatus.Processing },
            new() { Id = 7,  Customer="Ewa", Product="S�uchawki",   Quantity=2, PricePerItem=300m,  OrderDate=DateTime.Today.AddDays(-3),  Status=OrderStatus.New },

            // Ola
            new() { Id = 8,  Customer="Ola", Product="Laptop",      Quantity=1, PricePerItem=4200m, OrderDate=DateTime.Today.AddDays(-40), Status=OrderStatus.Delivered },
            new() { Id = 9,  Customer="Ola", Product="Monitor",     Quantity=3, PricePerItem=850m,  OrderDate=DateTime.Today.AddDays(-12), Status=OrderStatus.Processing },
            new() { Id = 10, Customer="Ola", Product="Laptop",      Quantity=2, PricePerItem=4100m, OrderDate=DateTime.Today.AddDays(-4),  Status=OrderStatus.New },

            // Jan
            new() { Id = 11, Customer="Jan", Product="Monitor",     Quantity=2, PricePerItem=780m,  OrderDate=DateTime.Today.AddDays(-18), Status=OrderStatus.Delivered },
            new() { Id = 12, Customer="Jan", Product="Monitor",     Quantity=1, PricePerItem=820m,  OrderDate=DateTime.Today.AddDays(-1),  Status=OrderStatus.Shipped },

            // Iga
            new() { Id = 13, Customer="Iga", Product="Tablet",      Quantity=1, PricePerItem=1600m, OrderDate=DateTime.Today.AddDays(-7),  Status=OrderStatus.Processing },
            new() { Id = 14, Customer="Iga", Product="Tablet",      Quantity=2, PricePerItem=1550m, OrderDate=DateTime.Today.AddDays(-2),  Status=OrderStatus.Delivered },

            // Kasia
            new() { Id = 15, Customer="Kasia", Product="Drukarka",  Quantity=1, PricePerItem=700m,  OrderDate=DateTime.Today.AddDays(-1),  Status=OrderStatus.New },
            new() { Id = 16, Customer="Kasia", Product="Laptop",    Quantity=1, PricePerItem=4300m, OrderDate=DateTime.Today.AddDays(-28), Status=OrderStatus.Delivered }
        };
        //1.Wypisz wszystkie zam�wienia o statusie �New�.
        var q1 = orders.Where(o => o.Status == OrderStatus.New);
        Print($"Zadanie 1 ",q1);
        //2. Sprawd�, czy istnieje zam�wienie na produkt �Laptop�.
        var q2 = orders.Count(o => o.Product == "Laptop") > 0;
        Console.WriteLine($"Zadanie 2 {q2}");
        //3. Wypisz zam�wienia z ostatnich 30 dni.
        var q3 = orders.Where(o => o.OrderDate >= DateTime.Today.AddDays(-30));
        Print($"Zadanie 3 ", q3);
        //4. Wygeneruj list� tekst�w w formacie: "Klient ? warto�� zam�wienia".
        var q4 = orders.Select(o => $"Klient {o.Customer}: {o.PricePerItem}");
        Print($"Zadanie 4", q4);
        //5. Znajd� zam�wienia, w kt�rych nazwa produktu zawiera liter� �o�.
        var q5 = orders.Where(o => o.Product.Contains('o'));
        Print($"Zadanie 5", q5);
        //6. Znajd� zam�wienia maj�ce warto�� wi�ksz� ni� 1000 i status inny ni� �Cancelled�.
        var q6 = orders.Where(o => o.PricePerItem * o.Quantity > 1000 && o.Status != OrderStatus.Cancelled);
        Print($"Zadanie 6", q6);
        //7. Sprawd�, czy wszystkie zam�wienia pochodz� z bie��cego roku.
        var q7 = orders.Where(o => o.OrderDate.Year == DateTime.Now.Year);
        Print($"Zadanie 7", q7);
        //8. Znajd� zam�wienia, gdzie klient zam�wi� wi�cej ni� jeden r�ny produkt (czyli klient pojawia si� wi�cej ni� raz z r�nymi produktami).
        var q8 = orders.Where(o => orders.Count(oo => oo.Customer == o.Customer) > 1).Distinct();
        Print($"Zadanie 8", q8);
        ///9. Wypisz klient�w wraz z liczb� dni, kt�re min�y od ich najstarszego zam�wienia.
        var q9 = orders.Select(o => new {Customer = o.Customer, OrderDate = o.OrderDate}).OrderBy(o => o.OrderDate).DistinctBy(o => o.Customer);
        Print($"Zadanie 9", q9);
        //10. Wypisz wszystkie unikalne pary (Klient, Produkt).
        var q10 = orders.Select(o => new { Customer = o.Customer, Product = o.Product }).Distinct();
        Print($"Zadanie 10", q10);
        //11. Znajd� klient�w, kt�rzy maj� co najmniej jedno zam�wienie w statusie �Cancelled� ORAZ co najmniej jedno w statusie �Delivered�.
        var q11 = orders.Where(o => orders.Where(oo =>o.Customer == oo.Customer && oo.Status == OrderStatus.Cancelled).Count() > 0 &&
        orders.Where(oo => o.Customer == oo.Customer && oo.Status == OrderStatus.Delivered).Count() > 0);
        Print($"Zadanie 11", q11);
        //12. Wypisz zam�wienia, kt�rych warto�� mie�ci si� pomi�dzy 1000 a 3000 z� i zosta�y z�o�one w ci�gu ostatnich 14 dni.
        var q12 = orders.Where(o => o.Total > 1000 && o.Total < 3000 && o.OrderDate >=  DateTime.Now.AddDays(-14));
        Print($"Zadanie 12", q12);
        //13. Znajd� klient�w, kt�rzy zamawiali ten sam produkt w r�nych terminach.
        var q13 = orders
            .Where(o => !orders.Where(oo => o.Customer == oo.Customer && o.Product == oo.Product).All(oo => oo.OrderDate == o.OrderDate));
        Console.WriteLine($"Zadanie 13 {q13}");

        //14. Znajd� zam�wienia, w kt�rych cena jednostkowa produktu jest wy�sza ni� ��czna warto�� jakiegokolwiek innego zam�wienia.
        var q14 = orders.Where(o => orders.Find(oo => o.PricePerItem > oo.Total) != null);
        Print("zadania 14", q14);

    }
}
