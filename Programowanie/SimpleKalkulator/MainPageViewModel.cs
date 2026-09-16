
using System;
using System.Collections.Generic;
using System.Text;

namespace SimpleKalkulator
{
    public class MainPageViewModel:BindableObject
    {
        public MainPageViewModel()
        {
            AddNumber = new Command(() => { ComputeResult(FirstNumber, SecondNumber); });
        }
        private string? _firstNumber;
        private string? _secondNumber;

        private float? _result;
        
        public string FirstNumber
        {
            get => _firstNumber;
            set
            {
                _firstNumber = value;
                ComputeResult(_firstNumber, _secondNumber);
                OnPropertyChanged();
            }
        }
        public string SecondNumber
        {
            get => _secondNumber;
            set
            {
                _secondNumber = value;
                ComputeResult(_firstNumber, _secondNumber);
                OnPropertyChanged();
            }
        }
        public float? Result
        {
            get => _result;
            set
            {
                _result = value;
                OnPropertyChanged();
            }
        }

        public void ComputeResult(string first, string second)
        {
            try
            {
                float firstF, secondF;
                firstF = float.Parse(first);
                secondF = float.Parse(second);
                if (first != null && second != null)
                {
                    Result = firstF + secondF;
                }
                else
                    Result = null;
            }
            catch
            {
                Result = null;
            }
        }
        public System.Windows.Input.ICommand AddNumber { get; set; }
    }
}
