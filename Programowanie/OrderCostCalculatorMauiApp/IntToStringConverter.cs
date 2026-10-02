
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;

namespace OrderCostCalculatorMauiApp
{
    public class IntToStringConverter : IValueConverter
    {
        public object? ConvertBack(object? value, Type targetType, object? parameter, CultureInfo culture)
        {
            
            if (value is string s)
            {
                if (s == "")
                    return null;
                if (int.TryParse(s, out int converted))
                    return converted;
                else
                {
                    string numberString = string.Empty;
                    foreach (var c in s)
                    {
                        if(char.IsDigit(c))
                            numberString += c;
                    }
                    return int.Parse(numberString);
                }
            }
            throw new InvalidDataException("value is not string");
        }

        public object? Convert(object? value, Type targetType, object? parameter, CultureInfo culture)
        {
            if (value is int i)
            {
                return i.ToString();
            }
            throw new InvalidDataException("value is not string");
        }
    }
}
