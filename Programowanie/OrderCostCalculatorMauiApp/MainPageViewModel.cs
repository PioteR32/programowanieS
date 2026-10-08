using System;
using System.Collections.Generic;
using System.Text;

namespace OrderCostCalculatorMauiApp
{
    public class MainPageViewModel : BindableObject
    {
        public MainPageViewModel()
        {
            CalculateCommand = new Command(() =>
            {
                int result = _price * _pieces + _selectedDelivery.Price;
                
                Result = result.ToString();
            });
        }
        private string _name = string.Empty;

        public string Name
        {
            get { return _name; }
            set
            {
                _name = value;
                OnPropertyChanged();
            }
        }
        private int _price = 0;

        public int Price
        {
            get { return _price; }
            set
            {  
                _price = value;
                OnPropertyChanged();
            }
        }
        private int _pieces = 1;

        public int Pieces
        {
            get { return _pieces; }
            set
            {
                _pieces = value;
                OnPropertyChanged();
            }
        }
        private string _result = string.Empty;

        public string Result
        {
            get { return _result; }
            set
            {
                _result = value;
                OnPropertyChanged();
            }
        }

        public List<OrderType> DeliveryTypes { get; set; } = new List<OrderType>
        {
            new OrderType { Name = "Odbiór osobisty", Price = 0 },
            new OrderType { Name = "Kurier", Price = 12 },
            new OrderType { Name = "Paczkomat", Price = 10 }
        };
        private OrderType _selectedDelivery = new OrderType();

        public OrderType SelectedDelivery
        {
            get { return _selectedDelivery; }
            set
            {
                _selectedDelivery = value;
                OnPropertyChanged();
            }
        }

        public bool IsFastDelivery {  get; set; }
        public Command CalculateCommand { get; set; }
    }
}
