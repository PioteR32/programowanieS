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
                int result = _price * _pieces;

            });
        }
        private string _name;

        public string Name
        {
            get { return _name; }
            set
            {
                _name = value;
                OnPropertyChanged();
            }
        }
        private int _price;

        public string Price
        {
            get { return _price.ToString(); }
            set
            {
                try
                {
                    _price = int.Parse(value);
                }
                catch
                {
                    
                }
                OnPropertyChanged();
            }
        }
        private int _pieces;

        public int Pieces
        {
            get { return _pieces; }
            set
            {
                _pieces = value;
                OnPropertyChanged();
            }
        }
        private string _result;

        public string Result
        {
            get { return _result; }
            set
            {
                _result = value;
                OnPropertyChanged();
            }
        }

        public bool IsFastDelivery {  get; set; }
        public Command CalculateCommand { get; set; }
    }
}
