using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;

namespace SportsEquipmentRentalMauiApp
{
    public class ValueIsNotNullConverter:IValueConverter
    {
        public object? ConvertBack(object? value, Type targetType, object? parameter, CultureInfo culture)
        {

            if (value is not null)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public object? Convert(object? value, Type targetType, object? parameter, CultureInfo culture)
        {
            if (value is not null)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
