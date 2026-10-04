using System.Collections.ObjectModel;
using System.Windows.Input;
using HotelBookingMauiApp.Models;

namespace HotelBookingMauiApp.ViewModels
{
    public class MainViewModel : BaseViewModel
    {
        private string _fullName;
        public string FullName
        {
            get => _fullName;
            set => SetProperty(ref _fullName, value);
        }

        private string _email;
        public string Email
        {
            get => _email;
            set => SetProperty(ref _email, value);
        }

        private DateTime _checkInDate = DateTime.Now;
        public DateTime CheckInDate
        {
            get => _checkInDate;
            set => SetProperty(ref _checkInDate, value);
        }

        private int _nights = 1;
        public int Nights
        {
            get => _nights;
            set => SetProperty(ref _nights, value);
        }

        private int _people = 1;
        public int People
        {
            get => _people;
            set => SetProperty(ref _people, value);
        }

        private RoomType _selectedRoomType;
        public RoomType SelectedRoomType
        {
            get => _selectedRoomType;
            set => SetProperty(ref _selectedRoomType, value);
        }

        public ObservableCollection<RoomType> RoomTypes { get; } = new ObservableCollection<RoomType>
        {
            new RoomType { Name = "Pokój jednoosobowy", PricePerNight = 200 },
            new RoomType { Name = "Pokój dwuosobowy", PricePerNight = 300 },
            new RoomType { Name = "Apartament", PricePerNight = 500 }
        };

        private bool _hasBreakfast;
        public bool HasBreakfast
        {
            get => _hasBreakfast;
            set => SetProperty(ref _hasBreakfast, value);
        }

        private bool _hasParking;
        public bool HasParking
        {
            get => _hasParking;
            set => SetProperty(ref _hasParking, value);
        }

        private double _discount = 0;
        public double Discount
        {
            get => _discount;
            set => SetProperty(ref _discount, value);
        }

        private string _summary;
        public string Summary
        {
            get => _summary;
            set => SetProperty(ref _summary, value);
        }

        public ICommand CalculateCostCommand { get; }

        public MainViewModel()
        {
            CalculateCostCommand = new Command(CalculateCost);
        }

        private async void CalculateCost()
        {
            if (string.IsNullOrWhiteSpace(FullName))
            {
                await Application.Current.MainPage.DisplayAlert("Błąd", "Proszę podać imię i nazwisko.", "OK");
                return;
            }

            if (SelectedRoomType == null)
            {
                await Application.Current.MainPage.DisplayAlert("Błąd", "Proszę wybrać rodzaj pokoju.", "OK");
                return;
            }

            if (CheckInDate.Date < DateTime.Now.Date)
            {
                await Application.Current.MainPage.DisplayAlert("Błąd", "Data przyjazdu nie może być wcześniejsza niż dzisiejsza.", "OK");
                return;
            }

            decimal roomCost = Nights * SelectedRoomType.PricePerNight;
            decimal breakfastCost = HasBreakfast ? (Nights * People * 40) : 0;
            decimal parkingCost = HasParking ? (Nights * 30) : 0;
            decimal totalCostBeforeDiscount = roomCost + breakfastCost + parkingCost;
            decimal discountAmount = totalCostBeforeDiscount * (decimal)(Discount / 100);
            decimal totalCost = totalCostBeforeDiscount - discountAmount;

            Summary = $"Imię i nazwisko: {FullName}\n" +
                      $"Data przyjazdu: {CheckInDate:dd.MM.yyyy}\n" +
                      $"Rodzaj pokoju: {SelectedRoomType.Name}\n" +
                      $"Liczba nocy: {Nights}\n" +
                      $"Liczba osób: {People}\n" +
                      $"Koszt pokoju: {roomCost} zł\n" +
                      $"Śniadanie: {(HasBreakfast ? $"{(Nights * People * 40)} zł" : "NIE")}\n" +
                      $"Parking: {(HasParking ? $"{(Nights * 30)} zł" : "NIE")}\n" +
                      $"Rabat: {Discount:F0}%\n" +
                      $"Łącznie: {totalCost:F2} zł";
        }
    }
}