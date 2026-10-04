namespace HotelBookingMauiApp.Models
{
    public class RoomType
    {
        public string Name { get; set; }
        public decimal PricePerNight { get; set; }

        public override string ToString()
        {
            return Name;
        }
    }
}