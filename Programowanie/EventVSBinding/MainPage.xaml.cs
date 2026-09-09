namespace EventVSBinding
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private void _slider_ValueChanged(object sender, ValueChangedEventArgs e)
        {
            if(_label is not null && sender is Slider slider)
            {
                _label.Rotation = slider.Value;
                _label.Text = slider.Value.ToString();
            }
        }
    }
}
