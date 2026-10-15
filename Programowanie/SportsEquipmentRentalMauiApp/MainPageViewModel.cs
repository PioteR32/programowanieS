using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Text;
using System.Windows.Input;

namespace SportsEquipmentRentalMauiApp
{
    public class MainPageViewModel:BindableObject
    {
        public MainPageViewModel()
        {
            CalculateCommand = new Command(CalculateTotalPrice);
        }
        public ObservableCollection<Rentaltem> Rentaltems { get; } = new ObservableCollection<Rentaltem>
        {
            new Rentaltem { Name = "Rower", Price = 40 },
            new Rentaltem { Name = "Hulajnoga", Price = 30 },
            new Rentaltem { Name = "Rolki", Price = 20 },
            new Rentaltem { Name = "Kajak", Price = 50 }
        };
        public string NameAndSurname { get; set; }
        Rentaltem _rentalItem = null;
        public Rentaltem SelectedRentaltemItem
        {
            get => _rentalItem;
            set
            {
                if (_rentalItem != value)
                {
                    _rentalItem = value;
                    OnPropertyChanged();
                }
            }
        }
        int _rentalDays;
        public int RentalDays
        {
            get => _rentalDays;
            set
            {
                if (_rentalDays != value)
                {
                    _rentalDays = value;
                    OnPropertyChanged();
                }
            }
        }
        public bool Insurance { get; set; }
        string _summary;
        public string Summary
        {
            get => _summary;
            set
            {
                if (_summary != value)
                {
                    _summary = value;
                    OnPropertyChanged();
                }
            }
        }
        public void CalculateTotalPrice()
        {
            if (SelectedRentaltemItem != null && RentalDays > 0)
            {
                Summary = $"Klient: {NameAndSurname}\n" +
               $"Sprzęt: {SelectedRentaltemItem?.Name}\n" +
               $"Liczba dni: {RentalDays}\n" +
               $"Ubezpieczenie: {(Insurance ? "Tak" : "Nie")}\n" +
               $"Sprzęt: {SelectedRentaltemItem?.Price * RentalDays} PLN\n" +
               $"Ubezpieczenie: {(Insurance ? 5 * RentalDays : 0)} PLN\n" +
               $"Łącznie: {SelectedRentaltemItem?.Price * RentalDays + (Insurance ? 5 * RentalDays : 0)} PLN";
            }
        }
        public ICommand CalculateCommand { get; set; }
    }
    
}
