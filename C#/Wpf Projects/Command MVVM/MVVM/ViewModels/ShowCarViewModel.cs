using MVVM.Models;

namespace MVVM.ViewModels;

public class ShowCarViewModel
{
    public  Car? selectedCar { get; set; }
    public ShowCarViewModel()
    {

    }

    public ShowCarViewModel(in Car? car)
    {
        selectedCar = car;

    }
}
