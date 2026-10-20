namespace SportsEquipmentRentalMauiApp
{
    public partial class MainPage : ContentPage
    {
       
        public MainPage()
        {
            BindingContext = new MainPageViewModel();
            InitializeComponent();

        }   
    }
}
