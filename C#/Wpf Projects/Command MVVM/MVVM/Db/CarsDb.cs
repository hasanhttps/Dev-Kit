using MVVM.Models;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;

namespace MVVM.Db;

public class CarsDb : IRepository<Car>
{
    public ObservableCollection<Car>? Cars { get; set; }

    public CarsDb()
    {
        Cars = new()
        {
            new Car() { Id = 1, Make = "Kia", Model = "Optima", Year = 2014},
            new Car() { Id = 2, Make = "BMW", Model = "M5", Year = 2014},
            new Car() { Id = 3, Make = "Mercedes", Model = "GLS", Year = 2014},
            new Car() { Id = 4, Make = "Tesla", Model = "Model 3", Year = 2014},
        };
    }

    public Car? Get(Func<Car, bool> predicate)
    {

        foreach (var item in Cars!)
            if(predicate(item) == true)
                return item;  
        return null;
    }

    public IList<Car>? GetList(Func<Car, bool>? predicate = null)
    {
        if (predicate == null)
            return Cars;

        IList<Car>? list = new List<Car>();
        foreach (var item in Cars!)
        {
            if(predicate(item) == true)
                list.Add(item);
        }
        return list;
    }

    public void Add(Car entity)
    {
        Cars!.Add(entity);
    }

    public void Update(Car entity)
    {
        foreach (var item in Cars!)
        {
            if(item.Id == entity.Id)
            {
                item.Make = entity.Make;
                item.Model = entity.Model;
                item.Year = entity.Year;
                return;
            }
        }
    }

    public void Remove(Car entity)
    {
        Cars!.Remove(entity);
    }
}


